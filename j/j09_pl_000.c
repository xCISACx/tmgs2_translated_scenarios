section "j09_pl_000"{
    SoundEffect_PlaySE(23, 127);
    Message_Who(0);
    Message_MsgDisp("主人公", "(I can't call them because they've\nmade other plans.)");
    SoundEffect_StopSE(23, 0);
    SoundEffect_PlaySE(20, 127);
    Message_CloseMsg();
    }
