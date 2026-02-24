section "j06_m7_010"{
    if (Parameter_GetCh1Param(7, 130) >= 3){
        Message_MsgSel("Yes. I understand.", "I'm sorry. I will decline.");
        switch (Message_TextSelect()){
            case 0:
            Voice_PlayVoice("J0607010_G00000", #1, "");
            Message_Who(7);
            Message_MsgDisp("Wakaouji", "Okay.\nThen, I will see you this Sunday....\nMy heart is kind of racing.");
            SoundEffect_PlaySE(20, 127);
            Message_Who(0);
            Message_MsgDisp("主人公", "(A date with\n｛Wakaouji＊＊｝...\nMy heart really is racing, a\nlittle.)");
            Date_SetNextSandayDateEvent(7);
            break ;
            case 1:
            Voice_PlayVoice("J0607010_G00100", #1, "");
            Message_Who(7);
            Message_MsgDisp("Wakaouji", "I wonder if you don't like that\nplace...\nAh, it's fine, don't worry about it.");
            SoundEffect_PlaySE(20, 127);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Even though he finally asked me\nout, I turned him down.\nThat was probably a bad thing to\ndo...)");
            Parameter_AddCh1Param(7, 60, #5);
            break ;
            }
        }
    }
