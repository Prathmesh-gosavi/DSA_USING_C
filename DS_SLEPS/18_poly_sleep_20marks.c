#include <stdio.h>
#include <stdlib.h>

// Structure for a polynomial term
struct PolyNode {
    int coeff;              // Coefficient
    int exp;                // Exponent
    struct PolyNode* next;  // Pointer to the next term
};

// Function prototypes
struct PolyNode* createTerm(int coeff, int exp);
struct PolyNode* insertTerm(struct PolyNode* head, int coeff, int exp);
void displayPolynomial(struct PolyNode* head);
struct PolyNode* multiplyPolynomials(struct PolyNode* poly1, struct PolyNode* poly2);

int main() {
    struct PolyNode* poly1 = NULL;
    struct PolyNode* poly2 = NULL;

    // Polynomial 1: 3x^2 + 5x + 6
    poly1 = insertTerm(poly1, 3, 2);
    poly1 = insertTerm(poly1, 5, 1);
    poly1 = insertTerm(poly1, 6, 0);

    // Polynomial 2: 4x^1 + 2
    poly2 = insertTerm(poly2, 4, 1);
    poly2 = insertTerm(poly2, 2, 0);

    printf("Polynomial 1: ");
    displayPolynomial(poly1);
    printf("Polynomial 2: ");
    displayPolynomial(poly2);

    struct PolyNode* result = multiplyPolynomials(poly1, poly2);
    printf("Result of multiplication: ");
    displayPolynomial(result);

    return 0;
}

// Create a new term
struct PolyNode* createTerm(int coeff, int exp) {
    struct PolyNode* newTerm = (struct PolyNode*)malloc(sizeof(struct PolyNode));
    newTerm->coeff = coeff;
    newTerm->exp = exp;
    newTerm->next = NULL;
    return newTerm;
}

// Insert a term into the polynomial in descending order of exponents
struct PolyNode* insertTerm(struct PolyNode* head, int coeff, int exp) {
    struct PolyNode* newTerm = createTerm(coeff, exp);
    if (head == NULL || head->exp < exp) {
        newTerm->next = head;
        return newTerm;
    }

    struct PolyNode* current = head;
    while (current->next != NULL && current->next->exp > exp) {
        current = current->next;
    }

    if (current->next != NULL && current->next->exp == exp) {
        current->next->coeff += coeff;  // Combine like terms
        free(newTerm);  // Free the new term if combined
    } else {
        newTerm->next = current->next;
        current->next = newTerm;
    }

    return head;
}

// Display the polynomial
void displayPolynomial(struct PolyNode* head) {
    struct PolyNode* current = head;
    while (current != NULL) {
        printf("%dx^%d ", current->coeff, current->exp);
        if (current->next != NULL) {
            printf("+ ");
        }
        current = current->next;
    }
    printf("\n");
}

// Multiply two polynomials
struct PolyNode* multiplyPolynomials(struct PolyNode* poly1, struct PolyNode* poly2) {
    struct PolyNode* result = NULL;

    for (struct PolyNode* p1 = poly1; p1 != NULL; p1 = p1->next) {
        for (struct PolyNode* p2 = poly2; p2 != NULL; p2 = p2->next) {
            int coeff = p1->coeff * p2->coeff;
            int exp = p1->exp + p2->exp;
            result = insertTerm(result, coeff, exp);
        }
    }
    return result;
}



#include <stdio.h>
#include <stdlib.h>

struct PolyNode {
    int coeff;
    int exp;
    struct PolyNode* next;
};

struct PolyNode* createTerm(int coeff, int exp) {
    struct PolyNode* newTerm = (struct PolyNode*)malloc(sizeof(struct PolyNode));
    newTerm->coeff = coeff;
    newTerm->exp = exp;
    newTerm->next = NULL;
    return newTerm;
}

struct PolyNode* insertTerm(struct PolyNode* head, int coeff, int exp) {
    struct PolyNode* newTerm = createTerm(coeff, exp);
    if (head == NULL || head->exp < exp) {
        newTerm->next = head;
        return newTerm;
    }

    struct PolyNode* current = head;
    while (current->next != NULL && current->next->exp > exp) {
        current = current->next;
    }

    if (current->next != NULL && current->next->exp == exp) {
        current->next->coeff += coeff;
        free(newTerm);
    } else {
        newTerm->next = current->next;
        current->next = newTerm;
    }

    return head;
}

void displayPolynomial(struct PolyNode* head) {
    struct PolyNode* current = head;
    while (current != NULL) {
        printf("%dx^%d ", current->coeff, current->exp);
        if (current->next != NULL) {
            printf("+ ");
        }
        current = current->next;
    }
    printf("\n");
}

struct PolyNode* multiplyPolynomials(struct PolyNode* poly1, struct PolyNode* poly2) {
    struct PolyNode* result = NULL;

    for (struct PolyNode* p1 = poly1; p1 != NULL; p1 = p1->next) {
        for (struct PolyNode* p2 = poly2; p2 != NULL; p2 = p2->next) {
            int coeff = p1->coeff * p2->coeff;
            int exp = p1->exp + p2->exp;
            result = insertTerm(result, coeff, exp);
        }
    }
    return result;
}

int main() {
    struct PolyNode* poly1 = NULL;
    struct PolyNode* poly2 = NULL;

    poly1 = insertTerm(poly1, 3, 2);
    poly1 = insertTerm(poly1, 5, 1);
    poly1 = insertTerm(poly1, 6, 0);

    poly2 = insertTerm(poly2, 4, 1);
    poly2 = insertTerm(poly2, 2, 0);

    printf("Polynomial 1: ");
    displayPolynomial(poly1);
    printf("Polynomial 2: ");
    displayPolynomial(poly2);

    struct PolyNode* result = multiplyPolynomials(poly1, poly2);
    printf("Result of multiplication: ");
    displayPolynomial(result);

    return 0;
}
    