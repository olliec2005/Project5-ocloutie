#include "OpenAddressing.h"
#include "SeparateChaining.h"
#include "Pizza.h"
using namespace std;

string get_key(Pizza pizza) {
    return to_string(pizza.get_pizza_id()) + pizza.get_pizza_name();
}

string get_key_2(Pizza pizza) {
    return to_string(pizza.get_pizza_id());
}

int main() {
    vector <Pizza> pizzas;

    if(loadData(pizzas))
    {
        cout<<"Pizzas have been loaded. Size of vector: "<<pizzas.size()<<endl;
    }

    DoubleHash<int> hash_table(1200);
    DoubleHash<int> hash_table_2(1500);
    DoubleHash<int> hash_table_3(1750);
    DoubleHash<int> hash_table_4(1900);
    DoubleHash<int> hash_table_5(2200);

    DoubleHash<int> hash_table_6(1200);
    DoubleHash<int> hash_table_7(1500);
    DoubleHash<int> hash_table_8(1750);
    DoubleHash<int> hash_table_9(1900);
    DoubleHash<int> hash_table_10(2200);

    SeparateChaining<int> separate_chaining(1200);
    SeparateChaining<int> separate_chaining_2(1500);
    SeparateChaining<int> separate_chaining_3(1750);
    SeparateChaining<int> separate_chaining_4(1900);
    SeparateChaining<int> separate_chaining_5(2200);

    SeparateChaining<int> separate_chaining_6(1200);
    SeparateChaining<int> separate_chaining_7(1500);
    SeparateChaining<int> separate_chaining_8(1750);
    SeparateChaining<int> separate_chaining_9(1900);
    SeparateChaining<int> separate_chaining_10(2200);

    int col_count = 0;

    ofstream key1_double;
    ofstream key2_double;
    ofstream key1_seperate;
    ofstream key2_seperate;

    key1_double.open("../data/key1_double.csv");
    key2_double.open("../data/key2_double.csv");
    key1_seperate.open("../data/key1_seperate.csv");
    key2_seperate.open("../data/key2_seperate.csv");

    key1_double << "f1, f2, f3, f4, f5" << endl;
    key2_double << "f1, f2, f3, f4, f5" << endl;
    key1_seperate << "f1, f2, f3, f4, f5" << endl;
    key2_seperate << "f1, f2, f3, f4, f5" << endl;

    for (int i = 0; i < 1000; i++) {
        hash_table.insert(get_key(pizzas[i]), pizzas[i].get_pizza_id(), col_count);
        key1_double << col_count << ", ";
        col_count = 0;

        hash_table_2.insert(get_key(pizzas[i]), pizzas[i].get_pizza_id(), col_count);
        key1_double << col_count << ", ";
        col_count = 0;

        hash_table_3.insert(get_key(pizzas[i]), pizzas[i].get_pizza_id(), col_count);
        key1_double << col_count << ", ";
        col_count = 0;

        hash_table_4.insert(get_key(pizzas[i]), pizzas[i].get_pizza_id(), col_count);
        key1_double << col_count << ", ";
        col_count = 0;

        hash_table_5.insert(get_key(pizzas[i]), pizzas[i].get_pizza_id(), col_count);
        key1_double << col_count << endl;
        col_count = 0;

        hash_table_6.insert(get_key_2(pizzas[i]), pizzas[i].get_pizza_id(), col_count);
        key2_double << col_count << ", ";
        col_count = 0;

        hash_table_7.insert(get_key_2(pizzas[i]), pizzas[i].get_pizza_id(), col_count);
        key2_double << col_count << ", ";
        col_count = 0;

        hash_table_8.insert(get_key_2(pizzas[i]), pizzas[i].get_pizza_id(), col_count);
        key2_double << col_count << ", ";
        col_count = 0;

        hash_table_9.insert(get_key_2(pizzas[i]), pizzas[i].get_pizza_id(), col_count);
        key2_double << col_count << ", ";
        col_count = 0;

        hash_table_10.insert(get_key_2(pizzas[i]), pizzas[i].get_pizza_id(), col_count);
        key2_double << col_count << endl;
        col_count = 0;

        separate_chaining.insert(get_key(pizzas[i]), pizzas[i].get_pizza_id(), col_count);
        key1_seperate << col_count << ", ";
        col_count = 0;

        separate_chaining_2.insert(get_key(pizzas[i]), pizzas[i].get_pizza_id(), col_count);
        key1_seperate << col_count << ", ";
        col_count = 0;

        separate_chaining_3.insert(get_key(pizzas[i]), pizzas[i].get_pizza_id(), col_count);
        key1_seperate << col_count << ", ";
        col_count = 0;

        separate_chaining_4.insert(get_key(pizzas[i]), pizzas[i].get_pizza_id(), col_count);
        key1_seperate << col_count << ", ";
        col_count = 0;

        separate_chaining_5.insert(get_key(pizzas[i]), pizzas[i].get_pizza_id(), col_count);
        key1_seperate << col_count << endl;
        col_count = 0;

        separate_chaining_6.insert(get_key_2(pizzas[i]), pizzas[i].get_pizza_id(), col_count);
        key2_seperate << col_count << ", ";
        col_count = 0;

        separate_chaining_7.insert(get_key_2(pizzas[i]), pizzas[i].get_pizza_id(), col_count);
        key2_seperate << col_count << ", ";
        col_count = 0;

        separate_chaining_8.insert(get_key_2(pizzas[i]), pizzas[i].get_pizza_id(), col_count);
        key2_seperate << col_count << ", ";
        col_count = 0;

        separate_chaining_9.insert(get_key_2(pizzas[i]), pizzas[i].get_pizza_id(), col_count);
        key2_seperate << col_count << ", ";
        col_count = 0;

        separate_chaining_10.insert(get_key_2(pizzas[i]), pizzas[i].get_pizza_id(), col_count);
        key2_seperate << col_count << endl;
        col_count = 0;
    }

    cout << "Key 1 table 1 length: " << hash_table.getTableSize() << endl;
    cout << "Key 1 table 2 length: " << hash_table_2.getTableSize() << endl;
    cout << "Key 1 table 3 length: " << hash_table_3.getTableSize() << endl;
    cout << "Key 1 table 4 length: " << hash_table_4.getTableSize() << endl;
    cout << "Key 1 table 5 length: " << hash_table_5.getTableSize() << endl;

    cout << "Key 2 table 1 length: " << hash_table_6.getTableSize() << endl;
    cout << "Key 2 table 2 length: " << hash_table_7.getTableSize() << endl;
    cout << "Key 2 table 3 length: " << hash_table_8.getTableSize() << endl;
    cout << "Key 2 table 4 length: " << hash_table_9.getTableSize() << endl;
    cout << "Key 2 table 5 length: " << hash_table_10.getTableSize() << endl;

    return 0;
}
