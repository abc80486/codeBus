ADT BinaryTree{
    InitBiTree(&T);
    DestroyBiTree(&T);
    CrearBiTree(&T,definition);
    ClearBiTree(&T);
    BiTreeEmpty(T);
    BiTreeDepth(T);
    Root(T);
    Value(T,e);
    Assign(T,&e,value);
    Parent(T,e);
    LeftChild(T,e);
    RightChild(T,e);
    LeftSibling(T,e);
    RightSibling(T,e);
    InsertChild(T,p,LR,c);
    DeleteChild(T,p,LR);
    PreOrderTraverse(T,Visit());
    InOrderTraverse(T,Visit());
    PostOrderTraverse(T,Visit());
    LevelOrdTraverse(T,Visit());
}