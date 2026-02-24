section "t03_m1_100"{
    int var0;
    var0 = 7;
    if (System_GlobalWork(3, 1) == 19){
        if ((Parameter_GetPl1Param(15) == 1) || (Parameter_GetPl1Param(15) == 21)){
            Message_Epilog_Text(5, 1);
            Message_Who(0);
            Message_MsgDisp("　　　", "｛Saeki＊＊｝ is studying\nmanagement.\nHe is different now.\nIt looks like he enjoys studying.");
            var0 = 7;
            }
        else {
            Message_Epilog_Text(5, 1);
            Message_Who(0);
            Message_MsgDisp("　　　", "｛Saeki＊＊｝ entered a 1st\nrate uni.\nHe's studying management.\nIt looks like he enjoys studying\nnow.");
            var0 = 8;
            }
        Message_Epilog_Text(17, 0);
        Message_DispMsg(0);
        Message_Who(0);
        Message_MsgDisp("　　　", "　　　");
        Message_Epilog_Clear(0);
        Message_Epilog_Text(0, 0);
        Message_DispMsg(1);
        Message_Epilog_Text(4, 0);
        Message_Who(0);
        Message_MsgDisp("　　　", "As always, we often fight because of\nthe stress of being busy every day,\nbut I feel we can be our natural\nselves when we're together.\nHe probably thinks so too.");
        }
    else {
        Message_Who(0);
        Message_MsgDisp("　　　", "｛Saeki＊＊｝ entered a 1st\nrate uni.\nHe's studying management.\nIt looks like he enjoys studying\nnow.");
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
    }
