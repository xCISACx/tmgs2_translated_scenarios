section "t03_m3_300"{
    if (System_GlobalWork(3, 1) == 39){
        if ((Parameter_GetPl1Param(15) == 1) || (Parameter_GetPl1Param(15) == 21)){
            Message_Epilog_Text(6, 1);
            Message_Who(0);
            Message_MsgDisp("　　　", "In between lectures, both\n｛Hikami＊＊｝ and I attend a\ndriving school.");
            Message_Epilog_Text(17, 0);
            Message_DispMsg(0);
            Message_Who(0);
            Message_MsgDisp("　　　", "　　　");
            Message_Epilog_Clear(0);
            Message_Epilog_Text(0, 0);
            Message_DispMsg(1);
            Message_Epilog_Text(4, 0);
            Message_Who(0);
            Message_MsgDisp("　　　", "We are competing to see who gets\ntheir license first...\nbut it seems like he is having some\ntrouble.\nHe says he gets yelled at for trying\nout double clutching.");
            }
        else {
            Message_Epilog_Text(6, 1);
            Message_Who(0);
            Message_MsgDisp("　　　", "｛Hikami＊＊｝ entered a 1st\nrate university.\nWe meet on his days off and go to\ndriving school together.");
            Message_Epilog_Text(17, 0);
            Message_DispMsg(0);
            Message_Who(0);
            Message_MsgDisp("　　　", "　　　");
            Message_Epilog_Clear(0);
            Message_Epilog_Text(0, 0);
            Message_DispMsg(1);
            Message_Epilog_Text(4, 0);
            Message_Who(0);
            Message_MsgDisp("　　　", "We are competing to see who gets\ntheir license first...\nbut it seems like he is having some\ntrouble.\nHe says he gets yelled at for trying\nout double clutching.");
            }
        }
    else {
        Message_Who(0);
        Message_MsgDisp("　　　", "｛Hikami＊＊｝ entered a 1st\nrate university.\nHe also goes to driving school so he\ncan get his driver's license.");
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
    }
