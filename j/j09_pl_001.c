section "j09_pl_001"{
    SoundEffect_PlaySE(23, 127);
    Message_Who(0);
    Message_MsgDisp("主人公", "(I can't get through, the line is\nbusy...)");
    SoundEffect_StopSE(23, 0);
    SoundEffect_PlaySE(20, 127);
    Message_CloseMsg();
    }
