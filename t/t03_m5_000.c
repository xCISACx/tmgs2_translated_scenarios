section "t03_m5_000"{
    if (System_GlobalWork(3, 1) == 50){
        Message_Who(0);
        Message_MsgDisp("　　　", "The sad story I heard as a child\nabout a mermaid and a young man that\nhad no");
        Message_Epilog_Text(8, 0);
        Message_Who(0);
        Message_MsgDisp("　　　", "ending turned into an amazing story,\nas ｛Chris＊＊｝ had come to\nsee me.");
        }
    else if (System_GlobalWork(3, 1) == 51){
        Message_Who(0);
        Message_MsgDisp("　　　", "The sad story I heard as a child\nabout a mermaid and a young man that\nhad no");
        Message_Epilog_Text(8, 0);
        Message_Who(0);
        Message_MsgDisp("　　　", "ending.\nAlthough ｛Chris＊＊｝ came\nto see me...\nWe ended up walking on different\npaths.");
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
    else if (System_GlobalWork(3, 1) == 58){
        Message_Epilog_Text(1, 0);
        Message_Who(0);
        Message_MsgDisp("　　　", "The sad story I heard as a child\nabout a mermaid and a young man that\nhad no");
        Message_Epilog_Text(5, 0);
        Message_Who(0);
        Message_MsgDisp("　　　", "ending.\nWe separated once, but the kiss was\nlike magic, and we met here again at\nthis beach.\nIt's like it was destiny.");
        Message_Epilog_Text(13, 0);
        Message_Who(0);
        Message_MsgDisp("　　　", "Perhaps the story of the young man\nand the mermaid ends in the same\nway.");
        }
    Message_DispMsg(1);
    if ((System_GlobalWork(3, 1) == 50) || (System_GlobalWork(3, 1) == 58)){
        Message_Epilog_Text(17, 0);
        Message_DispMsg(0);
        Message_Who(0);
        Message_MsgDisp("　　　", "　　　");
        Message_DispMsg(1);
        System_Call_GS2("T03", "PL", 15);
        }
    if ((System_GlobalWork(3, 1) == 50) || (System_GlobalWork(3, 1) == 58)){
        Message_Epilog_Text(17, 0);
        Message_DispMsg(0);
        Message_Who(0);
        Message_MsgDisp("　　　", "　　　");
        Message_Epilog_Clear(1);
        Message_Epilog_Text(4, 1);
        Message_DispMsg(1);
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
