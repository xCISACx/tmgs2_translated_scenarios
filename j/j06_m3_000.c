section "j06_m3_000"{
    Message_MsgSel("Sure, I'd be glad to!", "Uhh, umm... sorry.");
    switch (Message_TextSelect()){
        case 0:
        Character_ChFace(0, 0, 10);
        Character_ChFace(0, 4, 1);
        Voice_PlayVoice("J0603000_C00000", #1, "");
        Message_Who(3);
        Message_MsgDisp("Hikami", "Alright, it's decided, then.");
        Message_Who(0);
        Message_MsgDisp("主人公", "Then is it alright if we meet at the\n｛待ち合わせ場所｝ next Sunday?");
        Character_BlinkStart(3, 2, (#1));
        Voice_PlayVoice("J0603000_C00100", #1, "");
        Message_Who(3);
        Message_MsgDisp("Hikami", "Okay, let us do that....\nThank you, I look forward to it.");
        Music_StopBGM(0, 40);
        Character_Chara_GS2(3, "NON");
        Message_Who(0);
        Message_MsgDisp("主人公", "(｛Hikami＊＊｝ asked me out\non a date!)");
        Date_SetNextSandayDateEvent(3);
        break ;
        case 1:
        Character_ChFace(0, 0, 9);
        Voice_PlayVoice("J0603000_C00200", #1, "");
        Message_Who(3);
        Message_MsgDisp("Hikami", "... I see. That is unfortunate.\nSorry for stopping you.");
        Music_StopBGM(0, 40);
        Character_Chara_GS2(3, "NON");
        Message_Who(0);
        Message_MsgDisp("主人公", "(Even though he finally asked me\nout, I turned him down.\nThat was probably a bad thing to\ndo...)");
        Parameter_AddCh1Param(3, 60, #5);
        Parameter_AddCh1Param(3, 62, 5);
        break ;
        }
    }
