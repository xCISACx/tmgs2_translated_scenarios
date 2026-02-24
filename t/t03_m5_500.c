section "t03_m5_500"{
    if (System_GlobalWork(3, 1) == 59){
        Message_Epilog_Text(6, 1);
        Message_Who(0);
        Message_MsgDisp("　　　", "｛Chris＊＊｝ attends uni in\nEngland while studying so he can\ninherit the business.\nHe is extremely busy.");
        Message_Who(0);
        Message_MsgDisp("　　　", "　　　");
        Message_Epilog_Clear(0);
        Message_Epilog_Text(2, 0);
        Message_DispMsg(1);
        Message_Who(0);
        Message_MsgDisp("　　　", "Although he often comes to Japan for\nbusiness, he can't seem to make some\nfree time.");
        Message_Epilog_Text(8, 0);
        Message_Who(0);
        Message_MsgDisp("　　　", "I tell him working too much is bad,\nbut he says it's fine.\nI'm worried.\nI should tell him to relax the next\ntime I see him.");
        }
    else {
        Message_Who(0);
        Message_MsgDisp("　　　", "｛Chris＊＊｝ attends uni in\nEngland while studying so he can\ninherit the business.\nHe is extremely busy.");
        Message_Epilog_Text(17, 0);
        Message_DispMsg(0);
        Message_Who(0);
        Message_MsgDisp("　　　", "　　　");
        Message_Epilog_Clear(0);
        Message_Epilog_Text(1, 0);
        Message_DispMsg(1);
        Message_Who(0);
        Message_MsgDisp("　　　", "When he comes to Japan, he always\ncomes to see me.\nWhen I apologize, he says to me,\nwith a soft smile, \"When you say\nthat, it makes me wanna take you\nwith me\".");
        Message_Epilog_Text(12, 0);
        Message_Who(0);
        Message_MsgDisp("　　　", "I want to see him surprised, so\nperhaps I should secretly plan to go\nthere to see him.");
        }
    }
