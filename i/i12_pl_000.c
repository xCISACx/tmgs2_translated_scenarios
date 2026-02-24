section "i12_pl_000"{
    Screen_WipeIn(2);
    Message_Who(0);
    Message_MsgDisp("　　　", "　　　　　　・\n　　　　　　・\n　　　　　　・");
    Message_Who(0);
    Message_MsgDisp("主人公", "(I received an immediate reponse\nfrom the cafe telling me that I've\nbeen hired.)");
    Message_Who(0);
    Message_MsgDisp("主人公", "(I'm glad I made it in time to apply\nfor the job.\nAlright, I'll do my best!)");
    Parameter_InPl1Param(26, 1);
    Parameter_InByParam(1, 51, 1);
    Message_CloseMsg();
    }
