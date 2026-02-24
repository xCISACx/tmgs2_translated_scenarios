section "t03_ma_000"{
    if (System_GlobalWork(3, 1) == 100){
        Message_Who(0);
        Message_MsgDisp("　　　", "The sad story I heard as a child\nabout a mermaid and a young man that\nhad no");
        Message_Epilog_Text(8, 0);
        Message_Who(0);
        Message_MsgDisp("　　　", "ending turned into an amazing story,\nas Komori-kun had come to see me.");
        }
    else if (System_GlobalWork(3, 1) == 101){
        Message_Who(0);
        Message_MsgDisp("　　　", "The sad story I heard as a child\nabout a mermaid and a young man had\nno");
        Message_Epilog_Text(8, 0);
        Message_Who(0);
        Message_MsgDisp("　　　", "ending.\nAlthough Komori-kun came to see\nme...\nWe ended up walking on different\npaths.");
        Message_Epilog_Text(17, 0);
        Message_DispMsg(0);
        Message_Who(0);
        Message_MsgDisp("　　　", "　　　");
        Message_Epilog_Clear(1);
        Message_Epilog_Text(1, 1);
        Message_DispMsg(1);
        System_Call_GS2("T03", "PL", 10);
        Message_Who(0);
        Message_MsgDisp("　　　", "My friends and I often talk about\nthe legend.\nI don't know what is true, but one\nday, I will be able to discover my\nown legend...");
        Message_Epilog_Text(16, 1);
        Message_Who(0);
        Message_MsgDisp("　　　", "Surely... in the future.");
        System_GlobalWork(3, 0, 0);
        }
    if (System_GlobalWork(3, 1) == 100){
        Message_Epilog_Text(17, 0);
        Message_DispMsg(0);
        Message_Who(0);
        Message_MsgDisp("　　　", "　　　");
        Message_DispMsg(1);
        System_Call_GS2("T03", "PL", 91);
        }
    if (System_GlobalWork(3, 1) == 100){
        Message_Epilog_Text(17, 0);
        Message_DispMsg(0);
        Message_Who(0);
        Message_MsgDisp("　　　", "　　　");
        Message_Epilog_Clear(1);
        Message_Epilog_Text(2, 1);
        Message_DispMsg(1);
        Message_Epilog_Text(4, 1);
        Message_Who(0);
        Message_MsgDisp("　　　", "We don't have much time to see each\nother, but our bonds");
        Message_Epilog_Text(7, 1);
        Message_Who(0);
        Message_MsgDisp("　　　", "will never change.\nHolding hands and laughing\ntogether...");
        Message_Epilog_Text(10, 1);
        Message_Who(0);
        Message_MsgDisp("　　　", "We will always be together, because\nit's the kind of future that was\npromised to us by the legend.");
        }
    System_GlobalWork(3, 0, 0);
    }
