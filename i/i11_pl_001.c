section "i11_pl_001"{
    if (Parameter_GetPl1Param(26) == 0){
        Message_Who(0);
        Message_MsgDisp("主人公", "(It's past the application date for\nthe cafe...)");
        }
    else {
        Message_Who(0);
        Message_MsgDisp("主人公", "(It seems like they've stopped\ntaking applications for the job at\nthe cafe.)");
        }
    Message_CloseMsg();
    }
