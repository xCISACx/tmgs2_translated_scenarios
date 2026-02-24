section "j06_m6_000"{
    if (Parameter_GetCh1Param(6, 130) == 3){
        Message_MsgSel("Sure, I'd be glad to!", "Uhh, umm... sorry.");
        switch (Message_TextSelect()){
            case 0:
            Character_ChFace(0, 4, 0);
            Character_ChFace(0, 2, 0);
            Character_BlinkStart(6, 3, (#1));
            Character_ChFace(0, 3, 3);
            Voice_PlayVoice("J0606000_F00000", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "Then it's decided!");
            Message_Who(0);
            Message_MsgDisp("主人公", "Then is it alright if we meet at the\n｛待ち合わせ場所｝ next Sunday?");
            Character_ChFace(0, 0, 3);
            Voice_PlayVoice("J0606000_F00100", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "Okay. I will see you then!");
            Music_StopBGM(0, 40);
            Character_Chara_GS2(6, "NON");
            Message_Who(0);
            Message_MsgDisp("主人公", "(｛Amachi＊＊｝ asked me out\non a date!)");
            Date_SetNextSandayDateEvent(6);
            break ;
            case 1:
            Character_ChFace(0, 0, 9);
            Voice_PlayVoice("J0606000_F00200", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "Huh, is it no good? Well, it's fine.\nI will see you later.");
            Music_StopBGM(0, 40);
            Character_Chara_GS2(6, "NON");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Even though he finally asked me\nout, I turned him down.\nThat was probably a bad thing to\ndo...)");
            Parameter_AddCh1Param(6, 60, #5);
            Parameter_AddCh1Param(6, 62, 5);
            break ;
            }
        }
    else if (Parameter_GetCh1Param(6, 130) >= 4){
        Message_MsgSel("Sure, I'd be glad to!", "Uhh, umm... sorry.");
        switch (Message_TextSelect()){
            case 0:
            Character_ChFace(0, 4, 1);
            Character_ChFace(0, 2, 0);
            Character_BlinkStart(6, 3, (#1));
            Character_ChFace(0, 3, 3);
            Voice_PlayVoice("J0606000_F00300", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "Then it's decided!");
            Message_Who(0);
            Message_MsgDisp("主人公", "Then is it alright if we meet at the\n｛待ち合わせ場所｝ next Sunday?");
            Character_ChFace(0, 0, 10);
            Character_ChFace(0, 4, 1);
            Voice_PlayVoice("J0606000_F00400", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "Okay! I'm looking forward to it!!\n... I'll see you then!");
            Music_StopBGM(0, 40);
            Character_Chara_GS2(6, "NON");
            Message_Who(0);
            Message_MsgDisp("主人公", "(｛Amachi＊＊｝ asked me out\non a date!)");
            Date_SetNextSandayDateEvent(6);
            break ;
            case 1:
            Character_ChFace(0, 0, 9);
            Character_BlinkStart(6, 2, (#1));
            Voice_PlayVoice("J0606000_F00500", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "Ah... I see.\nIt's fine if you can't make it....\nI'll see you later.");
            Music_StopBGM(0, 40);
            Character_Chara_GS2(6, "NON");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Even though he finally asked me\nout, I turned him down.\nThat was probably a bad thing to\ndo...)");
            Parameter_AddCh1Param(6, 60, #5);
            Parameter_AddCh1Param(6, 62, 5);
            break ;
            }
        }
    }
