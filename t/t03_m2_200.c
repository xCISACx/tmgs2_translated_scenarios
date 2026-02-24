section "t03_m2_200"{
    if (System_GlobalWork(3, 1) == 29){
        if (Parameter_GetPl1Param(15) == 15){
            Message_Epilog_Text(6, 1);
            Message_Who(0);
            Message_MsgDisp("　　　", "｛Shiba＊＊｝ joined the\nBaseball Club there and immediately\nbecame a regular.");
            Message_Epilog_Text(17, 0);
            Message_DispMsg(0);
            Message_Who(0);
            Message_MsgDisp("　　　", "　　　");
            Message_Epilog_Clear(0);
            Message_Epilog_Text(0, 0);
            Message_DispMsg(1);
            Message_Epilog_Text(4, 0);
            Message_Who(0);
            Message_MsgDisp("　　　", "When I say \"As expected\", he tells\nme not to praise him, but I think\nit's amazing.\nWe aim to be Japan's to make that\ndream come true!");
            }
        else {
            Message_Epilog_Text(6, 1);
            Message_Who(0);
            Message_MsgDisp("　　　", "｛Shiba＊＊｝ entered a 1st\nrate sports uni and immediately\njoined the Baseball Club.\nHe became a regular shortly after.");
            Message_Epilog_Text(17, 0);
            Message_DispMsg(0);
            Message_Who(0);
            Message_MsgDisp("　　　", "　　　");
            Message_Epilog_Clear(0);
            Message_Epilog_Text(0, 0);
            Message_DispMsg(1);
            Message_Epilog_Text(4, 0);
            Message_Who(0);
            Message_MsgDisp("　　　", "When I say \"As expected\", he tells\nme not to praise him, but I think\nit's amazing.");
            Message_Epilog_Text(11, 0);
            Message_Who(0);
            Message_MsgDisp("　　　", "He is aiming to be the top\nuniversity baseball team.\nIt would be nice if it came true.");
            }
        }
    else {
        Message_Who(0);
        Message_MsgDisp("　　　", "｛Shiba＊＊｝ entered a 1st\nrate Sports uni and immediately\njoined the Baseball Club.\nHe became a regular shortly after.");
        Message_Epilog_Text(17, 0);
        Message_DispMsg(0);
        Message_Who(0);
        Message_MsgDisp("　　　", "　　　");
        Message_Epilog_Clear(0);
        Message_Epilog_Text(0, 0);
        Message_DispMsg(1);
        Message_Epilog_Text(3, 0);
        Message_Who(0);
        Message_MsgDisp("　　　", "When I say \"As expected\", he tells\nme not to praise him, while patting\nmy head.\nHe aims to be Japan's his dream.");
        }
    }
