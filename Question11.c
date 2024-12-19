#include <stdio.h>
#include <string.h>
//not working properly
struct Product {
    int id;
    char name[100];
    int quantity;
    float price;
};
void inputproducts(struct Product products[], int n) {
    for (int i = 0; i < n; i++) {
        printf("Enter details for product %d:\n", i + 1);
        printf("Product ID: ");
        scanf("%d", &products[i].id);
        printf("Product Name: ");
        fgets( products[i].name,100,stdin); 
        scanf("%d", &products[i].quantity);
        printf("Price: ");
        scanf("%f", &products[i].price);
    }
}
void displayproduct(struct Product p) {
    printf("Product ID: %d\n", p.id);
    printf("Product Name: %s\n", p.name);
    printf("Quantity: %d\n", p.quantity);
    printf("Price: %.2f\n", p.price);
}

int main() {
    int n;
    printf("Enter the number of products: ");
    scanf("%d", &n);
    struct Product products[n];
    inputproducts(products, n);
    float total = 0;
    for (int i = 0; i < n; i++) {
        total =total+ products[i].quantity * products[i].price;
    }
    int maxquantity = 0, maxprice = 0;
    for (int i = 1; i < n; i++) {
        if (products[i].quantity > products[maxquantity].quantity) {
            maxquantity = i;
        }
        if (products[i].price > products[maxprice].price) {
            maxprice = i;
        }
    }
    printf("\nTotal inventory value: %.2f\n", total);
    printf("\nProduct with the highest quantity:");
    displayproduct(products[maxquantity]);

    printf("\nProduct with the highest price:");
    displayproduct(products[maxprice]);

    return 0;
}
