![enter image description here](https://scontent.fbog2-3.fna.fbcdn.net/v/t1.0-9/159298258_10159303008403035_9004958685003391596_o.jpg?_nc_cat=111&ccb=1-3&_nc_sid=730e14&_nc_eui2=AeFXSCAyYSKJuyVOLfF106Cm3Gpbpvua9E_calum-5r0T7l88owbtzppRe2TFS3X9Hc&_nc_ohc=4MqE1ko5M5oAX9fXVbq&_nc_ht=scontent.fbog2-3.fna&oh=93dc8fb591cfd126acbb35bd1bd91614&oe=606E048A)
# Description

This repository contains a diferent fucntions for binary trees concept in C
 
# Files 

 - **README** 
 - **binary_trees.h**
 - **binary_tree_print.c**
 - **0-binary_tree_node.c**
 -  **1-binary_tree_insert_left.c**
 - **2-binary_tree_insert_right.c**
 - **3-binary_tree_delete.c**
 - **4-binary_tree_is_leaf.c**
 - **5-binary_tree_is_root.c**
 - **6-binary_tree_preorder.c**
 - **7-binary_tree_inorder.c**
 - **8-binary_tree_postorder.c**
 - **9-binary_tree_height.c**
 - **10-binary_tree_depth.c**
 - **11-binary_tree_size.c**
 - **12-binary_tree_leaves.c**
 - **13-binary_tree_nodes.c**
 - **14-binary_tree_balance.c**
 - **15-binary_tree_is_full.c**
 - **16-binary_tree_is_perfect.c**
 - **17-binary_tree_sibling.c**
 - **18-binary_tree_uncle.c**

## Example

Copy this main to execute the function **0-binary_tree_node.c**

    #include <stdlib.h>
    #include "binary_trees.h"
    
    /**
     * main - Entry point
     *
     * Return: Always 0 (Success)
     */
    int main(void)
    {
        binary_tree_t *root;
    
        root = binary_tree_node(NULL, 98);
    
        root->left = binary_tree_node(root, 12);
        root->left->left = binary_tree_node(root->left, 6);
        root->left->right = binary_tree_node(root->left, 16);
    
        root->right = binary_tree_node(root, 402);
        root->right->left = binary_tree_node(root->right, 256);
        root->right->right = binary_tree_node(root->right, 512);
    
        binary_tree_print(root);
        return (0);
    }

## To compile

```
gcc -Wall -Wextra -Werror -pedantic binary_tree_print.c 
0-main.c 0-binary_tree_node.c -o 0-node
```
## To execute
```
$ ./0-node
       .-------(098)-------.
  .--(012)--.         .--(402)--.
(006)     (016)     (256)     (512)
$
```

## Requirements

-   Ubuntu 16.04.7 LTS
    
-   Functions and files will be compiled with gcc 4.8.4 with flags
    
-   All the files must have  [Betty](https://github.com/holbertonschool/Betty/wiki)  style

## Author
 
 - **Juan Carlos Hernández** : Twitter - [@luigi_jong](https://twitter.com/luigi_jong)
 - **Leonardo Valencia** : Twitter - [@leovalsan_dev](https://twitter.com/leovalsan_dev)

##  info

 - Date 10/03/2021)
 - Holberton school Colombia 
 - Cohort #13 BOG0920