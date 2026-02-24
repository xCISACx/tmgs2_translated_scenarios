section "t03_m3_000"{
    if (System_GlobalWork(3, 1) == 30){
        Message_Who(0);
        Message_MsgDisp("　　　", "The sad story I heard as a child\nabout a mermaid and a young man that\nhad no");
        Message_Epilog_Text(8, 0);
        Message_Who(0);
        Message_MsgDisp("　　　", "ending turned into an amazing story,\nas ｛Hikami＊＊｝ had come to\nsee me.");
        }
    else if (System_GlobalWork(3, 1) == 31){
        Message_Who(0);
        Message_MsgDisp("　　　", "The sad story I heard as a child\nabout a mermaid and a young man had\nno");
        Message_Epilog_Text(8, 0);
        Message_Who(0);
        Message_MsgDisp("　　　", "ending.\nAlthough ｛Hikami＊＊｝ came\nto see me...\nWe ended up walking on different\npaths.");
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
    else if (System_GlobalWork(3, 1) == 38){
        Message_Epilog_Text(1, 0);
        Message_Who(0);
        Message_MsgDisp("　　　", "The sad story I heard as a child\nabout a mermaid and a young man had\nno");
        Message_Epilog_Text(5, 0);
        Message_Who(0);
        Message_MsgDisp("　　　", "ending.\nWe separated once, but the kiss was\nlike magic, and we met here again at\nthis beach.\nIt's like it was destiny.");
        Message_Epilog_Text(13, 0);
        Message_Who(0);
        Message_MsgDisp("　　　", "Perhaps the story of the young man\nand the mermaid ends in the same\nway.");
        }
    if ((System_GlobalWork(3, 1) == 30) || (System_GlobalWork(3, 1) == 38)){
        Message_Epilog_Text(17, 0);
        Message_DispMsg(0);
        Message_Who(0);
        Message_MsgDisp("　　　", "　　　");
        Message_DispMsg(1);
        if ((Parameter_GetPl1Param(15) == 1) || (Parameter_GetPl1Param(15) == 21)){
            Message_Epilog_Text(5, 1);
            Message_Who(0);
            Message_MsgDisp("　　　", "｛Hikami＊＊｝ and I both\nentered a 1st rate university.");
            Message_Epilog_Text(9, 1);
            Message_Who(0);
            Message_MsgDisp("　　　", "｛Hikami＊＊｝ is currently\nattending driving school so he can\nget his driver's license.");
            Message_Epilog_Text(17, 0);
            Message_DispMsg(0);
            Message_Who(0);
            Message_MsgDisp("　　　", "　　　");
            Message_Epilog_Clear(0);
            Message_Epilog_Text(3, 0);
            Message_DispMsg(1);
            Message_Epilog_Text(3, 0);
            Message_Who(0);
            Message_MsgDisp("　　　", "He said that he'd buy a car and take\nme on a drive, but when he says\nthings like \"I got yelled at again\ntoday at driving school\", it might\nbe impossible right now.");
            }
        else {
            System_Call_GS2("T03", "PL", 13);
            }
        }
    if ((System_GlobalWork(3, 1) == 30) || (System_GlobalWork(3, 1) == 38)){
        Message_Epilog_Text(17, 0);
        Message_DispMsg(0);
        Message_Who(0);
        Message_MsgDisp("　　　", "　　　");
        Message_Epilog_Clear(1);
        Message_Epilog_Text(2, 1);
        Message_DispMsg(1);
        if ((Parameter_GetPl1Param(15) == 1) || (Parameter_GetPl1Param(15) == 21)){
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
