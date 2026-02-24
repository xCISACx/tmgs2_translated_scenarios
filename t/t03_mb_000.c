section "t03_mb_000"{
    if (System_GlobalWork(3, 1) == 110){
        Message_Who(0);
        Message_MsgDisp("　　　", "The sad story I heard as a child\nabout a mermaid and a young man that\nhad no");
        Message_Epilog_Text(8, 0);
        Message_Who(0);
        Message_MsgDisp("　　　", "ending turned into an amazing story,\nas Tarou-kun had come to see me.");
        }
    else if (System_GlobalWork(3, 1) == 111){
        Message_Who(0);
        Message_MsgDisp("　　　", "The sad story I heard as a child\nabout a mermaid and a young man that\nhad no");
        Message_Epilog_Text(8, 0);
        Message_Who(0);
        Message_MsgDisp("　　　", "ending.\nAlthough Tarou-kun came to see me...\nWe ended up walking on different\npaths.");
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
    if (System_GlobalWork(3, 1) == 110){
        Message_Epilog_Text(17, 0);
        Message_DispMsg(0);
        Message_Who(0);
        Message_MsgDisp("　　　", "　　　");
        Message_DispMsg(1);
        if (Parameter_GetPl1Param(15) == 2){
            Message_Epilog_Text(3, 1);
            Message_Who(0);
            Message_MsgDisp("　　　", "After graduation, I entered the same\n2nd rate university that Tarou-kun\ngoes to.");
            Message_Epilog_Text(7, 1);
            Message_Who(0);
            Message_MsgDisp("　　　", "Tarou-kun is in 2nd year.\nWe take as many of the same classes\ntogether as possible, and we're both\nin the tennis club.\nEvery day feels like a date.");
            Message_Epilog_Text(17, 0);
            Message_DispMsg(0);
            Message_Who(0);
            Message_MsgDisp("　　　", "　　　");
            Message_Epilog_Clear(0);
            Message_Epilog_Text(3, 0);
            Message_DispMsg(1);
            Message_Epilog_Text(3, 0);
            Message_Who(0);
            Message_MsgDisp("　　　", "Since we're always together, my\nfriends might be a little shocked.");
            Message_Epilog_Text(8, 0);
            Message_Who(0);
            Message_MsgDisp("　　　", "He said he'd teach me yachting next\nsummer, but it seems hard.\nIt seems like I'll be training with\nhim up until summer.");
            }
        else {
            System_Call_GS2("T03", "PL", 92);
            }
        }
    if (System_GlobalWork(3, 1) == 110){
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
