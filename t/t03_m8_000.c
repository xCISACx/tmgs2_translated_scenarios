section "t03_m8_000"{
    if (System_GlobalWork(3, 1) == 80){
        Message_Who(0);
        Message_MsgDisp("　　　", "The sad story I heard as a child\nabout a mermaid and a young man that\nhad no");
        Message_Epilog_Text(8, 0);
        Message_Who(0);
        Message_MsgDisp("　　　", "ending turned into an amazing story,\nas ｛Masaki＊＊｝ had come to\nsee me.");
        }
    else if (System_GlobalWork(3, 1) == 81){
        Message_Who(0);
        Message_MsgDisp("　　　", "The sad story I heard as a child\nabout a mermaid and a young man that\nhad no");
        Message_Epilog_Text(8, 0);
        Message_Who(0);
        Message_MsgDisp("　　　", "ending.\nAlthough ｛Masaki＊＊｝ came\nto see me...\nWe ended up walking on different\npaths.");
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
    else if (System_GlobalWork(3, 1) == 88){
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
    if ((System_GlobalWork(3, 1) == 80) || (System_GlobalWork(3, 1) == 88)){
        Message_Epilog_Text(17, 0);
        Message_DispMsg(0);
        Message_Who(0);
        Message_MsgDisp("　　　", "　　　");
        Message_Epilog_Clear(1);
        Message_Epilog_Text(1, 1);
        Message_DispMsg(1);
        if (Parameter_GetPl1Param(15) == 2){
            Message_Who(0);
            Message_MsgDisp("　　　", "After graduation, I entered the same\n2nd rate university that");
            Message_Epilog_Text(6, 1);
            Message_Who(0);
            Message_MsgDisp("　　　", "Masaki-senpai goes to.\nHe is now in 4th year.\nHe's not worried about his future\ncareer.\nHe got a hold of some recipes from\nthe uni cafe and improved them.");
            Message_Epilog_Text(17, 0);
            Message_DispMsg(0);
            Message_Who(0);
            Message_MsgDisp("　　　", "　　　");
            Message_Epilog_Clear(0);
            Message_Epilog_Text(4, 0);
            Message_DispMsg(1);
            Message_Who(0);
            Message_MsgDisp("　　　", "When I say I want to try it, he says\nhe'll let me try it, so I should\ncome over.\nGoing over to his place for the\nfirst time to have lunch sounds like\nfun.\nMaybe I should make dessert.");
            }
        else {
            System_Call_GS2("T03", "PL", 18);
            }
        }
    if ((System_GlobalWork(3, 1) == 80) || (System_GlobalWork(3, 1) == 88)){
        Message_Epilog_Text(17, 0);
        Message_DispMsg(0);
        Message_Who(0);
        Message_MsgDisp("　　　", "　　　");
        Message_Epilog_Clear(1);
        Message_Epilog_Text(2, 1);
        Message_DispMsg(1);
        if (Parameter_GetPl1Param(15) == 2){
            Message_Who(0);
            Message_MsgDisp("　　　", "Going to the same university and\nspending time together will\nstrengthen our bond.\nHolding hands");
            Message_Epilog_Text(7, 1);
            Message_Who(0);
            Message_MsgDisp("　　　", "and laughing together...\nWe will always be together.");
            Message_Epilog_Text(10, 1);
            Message_Who(0);
            Message_MsgDisp("　　　", "Because it's the kind of future that\nwas promised to us by the legend.");
            }
        else {
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
        }
    System_GlobalWork(3, 0, 0);
    }
