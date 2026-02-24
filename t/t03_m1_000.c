section "t03_m1_000"{
    if (System_GlobalWork(3, 1) == 10){
        Message_Who(0);
        Message_MsgDisp("　　　", "｛Saeki＊＊｝, who I had met\nonly once as a child, and who swore\nthat we'd");
        Message_Epilog_Text(8, 0);
        Message_Who(0);
        Message_MsgDisp("　　　", "meet again.\nThe kiss we shared was like magic,\nand we met once more.\nIt's what we promised each other at\nthis beach.");
        }
    else if (System_GlobalWork(3, 1) == 11){
        Message_Who(0);
        Message_MsgDisp("　　　", "｛Saeki＊＊｝, who I had met\nonly once as a child, and who swore\nthat we'd");
        Message_Epilog_Text(8, 0);
        Message_Who(0);
        Message_MsgDisp("　　　", "meet again.\nAlthough the promise was carried\nout...\nWe ended up walking on different\npaths.");
        Message_Epilog_Text(17, 0);
        Message_DispMsg(0);
        Message_Who(0);
        Message_MsgDisp("　　　", "　　　");
        Message_Epilog_Clear(1);
        Message_Epilog_Text(1, 1);
        Message_DispMsg(1);
        System_Call_GS2("T03", "PL", 10);
        Message_Who(0);
        Message_MsgDisp("　　　", "My friends and I often talk about\nthe legend.\nI don't know what is true, but one\nday, I will be able to discover my\nown legend...\nlive test");
        Message_Epilog_Text(16, 1);
        Message_Who(0);
        Message_MsgDisp("　　　", "Surely... in the future.");
        System_GlobalWork(3, 0, 0);
        }
    else if (System_GlobalWork(3, 1) == 18){
        Message_Epilog_Text(1, 0);
        Message_Who(0);
        Message_MsgDisp("　　　", "｛Saeki＊＊｝, who I had met\nonly once as a child, and who swore\nthat we'd");
        Message_Epilog_Text(5, 0);
        Message_Who(0);
        Message_MsgDisp("　　　", "meet again.\nWe parted once, but the kiss was\nlike magic, and we met here again at\nthis beach.\nIt's like it was destiny.");
        Message_Epilog_Text(13, 0);
        Message_Who(0);
        Message_MsgDisp("　　　", "Perhaps the story of the young man\nand the mermaid ends in the same\nway.");
        }
    if ((System_GlobalWork(3, 1) == 10) || (System_GlobalWork(3, 1) == 18)){
        Message_Epilog_Text(17, 0);
        Message_DispMsg(0);
        Message_Who(0);
        Message_MsgDisp("　　　", "　　　");
        Message_Epilog_Clear(1);
        Message_Epilog_Text(2, 1);
        Message_DispMsg(1);
        if ((Parameter_GetPl1Param(15) == 1) || (Parameter_GetPl1Param(15) == 21)){
            Message_Who(0);
            Message_MsgDisp("　　　", "After graduation,\n｛Saeki＊＊｝ and I entered\na 1st rate university.");
            Message_Epilog_Text(8, 1);
            Message_Who(0);
            Message_MsgDisp("　　　", "｛Saeki＊＊｝ is studying\nmanagement.\nHe is different now.\nIt looks like he enjoys studying.");
            Message_Epilog_Text(17, 0);
            Message_DispMsg(0);
            Message_Who(0);
            Message_MsgDisp("　　　", "　　　");
            Message_Epilog_Clear(0);
            Message_Epilog_Text(0, 0);
            Message_DispMsg(1);
            Message_Epilog_Text(5, 0);
            Message_Who(0);
            Message_MsgDisp("　　　", "When I tell him, he says \"I know, so\ndon't say it\" and gives me a chop,\nbut it doesn't hurt.\nI get to see his embarrassed face,\nso it's a good thing.");
            }
        else {
            System_Call_GS2("T03", "PL", 11);
            }
        }
    if ((System_GlobalWork(3, 1) == 10) || (System_GlobalWork(3, 1) == 18)){
        Message_Epilog_Text(17, 0);
        Message_DispMsg(0);
        Message_Who(0);
        Message_MsgDisp("　　　", "　　　");
        Message_Epilog_Clear(1);
        Message_Epilog_Text(2, 1);
        Message_DispMsg(1);
        if ((Parameter_GetPl1Param(15) == 1) || (Parameter_GetPl1Param(15) == 21)){
            Message_Who(0);
            Message_MsgDisp("　　　", "Going to the same university and\nspending time together will\nstrengthen our bond.\nThe sad tale of");
            Message_Epilog_Text(7, 1);
            Message_Who(0);
            Message_MsgDisp("　　　", "the mermaid and the young man that\nhad no ending.");
            Message_Epilog_Text(10, 1);
            Message_Who(0);
            Message_MsgDisp("　　　", "Perhaps this happy ending will turn\ninto the legend of the lighthouse.");
            Message_Epilog_Text(14, 1);
            Message_Who(0);
            Message_MsgDisp("　　　", "Starting today, from this moment.");
            }
        else {
            Message_Epilog_Text(4, 1);
            Message_Who(0);
            Message_MsgDisp("　　　", "We don't have much time to see each\nother, but our bond");
            Message_Epilog_Text(7, 1);
            Message_Who(0);
            Message_MsgDisp("　　　", "will never change.\nThe sad tale of the mermaid and the\nyoung");
            Message_Epilog_Text(10, 1);
            Message_Who(0);
            Message_MsgDisp("　　　", "man that had no ending.\nPerhaps this happy ending will turn\ninto the legend of the lighthouse.");
            Message_Epilog_Text(14, 1);
            Message_Who(0);
            Message_MsgDisp("　　　", "Starting today, from this moment.");
            }
        }
    System_GlobalWork(3, 0, 0);
    }
