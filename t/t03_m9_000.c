section "t03_m9_000"{
    Message_Epilog_Text(5, 0);
    if (System_GlobalWork(3, 1) == 90){
        Message_Who(0);
        Message_MsgDisp("　　　", "The legend I knew of was at a\ndifferent place, but Akagi-kun had\ncome to see me.");
        }
    else if (System_GlobalWork(3, 1) == 91){
        Message_Who(0);
        Message_MsgDisp("　　　", "Although Akagi-kun had come to see\nme...\nWe ended up walking on different\npaths.");
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
    if (System_GlobalWork(3, 1) == 90){
        Message_Epilog_Text(17, 0);
        Message_DispMsg(0);
        Message_Who(0);
        Message_MsgDisp("　　　", "　　　");
        Message_Epilog_Clear(1);
        Message_DispMsg(1);
        Message_Epilog_Text(3, 1);
        if ((Parameter_GetPl1Param(15) == 1) || (Parameter_GetPl1Param(15) == 21)){
            Message_Who(0);
            Message_MsgDisp("　　　", "After graduation, both Akagi-kun and\nI entered a 1st rate university.");
            Message_Epilog_Text(7, 1);
            Message_Who(0);
            Message_MsgDisp("　　　", "We've been talking a lot since that\nday.\nHe gets excited talking about\nlegends.\nWhen I said that Hanegasaki had a\nlegend,");
            Message_Epilog_Text(17, 0);
            Message_DispMsg(0);
            Message_Who(0);
            Message_MsgDisp("　　　", "　　　");
            Message_Epilog_Clear(0);
            Message_Epilog_Text(3, 0);
            Message_DispMsg(1);
            Message_Who(0);
            Message_MsgDisp("　　　", "he says \"I'm sorry it didn't come\ntrue\".\nBut right after, he says that we\nshould meet at the lighthouse.\nMaybe we can make the legend of the\nlighthouse and church come true, and\ncreate a new legend?");
            }
        else {
            System_Call_GS2("T03", "PL", 19);
            }
        }
    if (System_GlobalWork(3, 1) == 90){
        Message_Epilog_Text(17, 0);
        Message_DispMsg(0);
        Message_Who(0);
        Message_MsgDisp("　　　", "　　　");
        Message_DispMsg(1);
        Message_Epilog_Clear(1);
        Message_Epilog_Text(2, 1);
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
