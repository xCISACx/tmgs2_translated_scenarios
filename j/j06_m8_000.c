section "j06_m8_000"{
    Message_MsgSel("Sure, I'd be glad to!", "Uhh, umm... sorry.");
    switch (Message_TextSelect()){
        case 0:
        if (Parameter_GetCh1Param(8, 130) == 3){
            Character_ChFace(0, 0, 10);
            Voice_PlayVoice("J0608001_H00000", #1, "");
            Message_Who(8);
            Message_MsgDisp("Masaki", "Oh, good reply.\nYou're the model junior, aren't you.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Then is it alright if we meet at the\n｛待ち合わせ場所｝ next Sunday?");
            if (System_GlobalWork(23, 1) == 8){
                Voice_PlayVoice("FD_08_160_00200", #1, "");
                Message_Who(8);
                Message_MsgDisp("Masaki", "Okay. Have you written it down?");
                Voice_PlayVoice("FD_08_160_00300", #1, "");
                Message_Who(8);
                Message_MsgDisp("Masaki", "I asked you so you could rehearse\nfor the real thing, so don't be\nlate, okay?\nLater.");
                }
            else {
                Voice_PlayVoice("J0608001_H00100", #1, "");
                Message_Who(8);
                Message_MsgDisp("Masaki", "Okay, don't get it wrong. Later.");
                }
            }
        else if (Parameter_GetCh1Param(8, 130) > 3){
            Character_ChFace(0, 2, 4);
            Character_ChFace(0, 3, 5);
            Voice_PlayVoice("J0608000_H00000", #1, "");
            Message_Who(8);
            Message_MsgDisp("Masaki", "... Ah, so that's an 'okay'.\nSorry, I spaced out for a second.\nHahaha.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Then is it alright if we meet at the\n｛待ち合わせ場所｝ next Sunday?");
            Character_ChFace(0, 0, 0);
            Voice_PlayVoice("J0608001_H00200", #1, "");
            Message_Who(8);
            Message_MsgDisp("Masaki", "Okay.\nBe careful on your way there, okay?\nLater.");
            }
        Music_StopBGM(0, 40);
        Character_Chara_GS2(8, "NON");
        Message_Who(0);
        Message_MsgDisp("主人公", "(Masaki-senpai asked me out on a\ndate!)");
        Date_SetNextSandayDateEvent(8);
        break ;
        case 1:
        if (Parameter_GetCh1Param(8, 130) == 3){
            Character_ChFace(0, 4, 0);
            Character_ChFace(0, 2, 4);
            Character_ChFace(0, 3, 2);
            Voice_PlayVoice("J0608000_H00400", #1, "");
            Message_Who(8);
            Message_MsgDisp("Masaki", "Huh. Did you not wanna go there?");
            Message_Who(0);
            Message_MsgDisp("主人公", "I'm sorry...");
            Character_ChFace(0, 0, 10);
            Voice_PlayVoice("J0608000_H00500", #1, "");
            Message_Who(8);
            Message_MsgDisp("Masaki", "Pfft.\nI should have suggested a more\nappealing place, then～.");
            Character_ChFace(0, 0, 3);
            Voice_PlayVoice("J0608000_H00600", #1, "");
            Message_Who(8);
            Message_MsgDisp("Masaki", "Well, it's fine.\nI'll save that for next time.");
            }
        else if (Parameter_GetCh1Param(8, 130) > 3){
            Character_ChFace(0, 2, 5);
            Character_ChFace(0, 3, 3);
            Voice_PlayVoice("J0608001_H00300", #1, "");
            Message_Who(8);
            Message_MsgDisp("Masaki", "Ah... right.\nI'll be asking you again. Sorry.");
            }
        Music_StopBGM(0, 40);
        Character_Chara_GS2(8, "NON");
        Message_Who(0);
        Message_MsgDisp("主人公", "(Even though he finally asked me\nout, I turned him down.\nThat was probably a bad thing to\ndo...)");
        Parameter_AddCh1Param(8, 60, #5);
        break ;
        }
    }
