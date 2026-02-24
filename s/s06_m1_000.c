section "s06_m1_000"{
    Background_Bg_GS2("BG_HO100_CO_0", #1, #1, 0);
    System_Wait(10);
    Screen_WipeIn(2);
    SoundEffect_PlayStream(3, "SS_T_00_038_M00");
    System_Wait(120);
    SoundEffect_PlayStream(3, "SEQ_SE_EV_138");
    Character_ChFace(0, 0, 0);
    Character_Chara_GS2(1, "M1_??F", 0);
    if (Parameter_GetCh1Param(1, 130) <= 2){
        Voice_PlayVoice("S0601000_A00000", #1, "");
        Message_Who(1);
        Message_MsgDisp("Saeki", "Happy New Year.");
        Message_Who(0);
        Message_MsgDisp("主人公", "Happy New Year!");
        if (Parameter_ChkPlayer(16) == 1){
            Character_ChFace(0, 0, 11);
            Voice_PlayVoice("S0601000_A00100", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "Heh... A kimono.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Yeah. How is it?");
            Character_ChFace(0, 0, 10);
            Character_BlinkStart(1, 2, (#1));
            Voice_PlayVoice("S0601000_A00200", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "It's nice.\nIt feels like it was worth it a bit.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(I guess he liked it...?)");
            }
        Character_BlinkStart(1, 0, (#1));
        Character_ChFace(0, 2, 3);
        Character_ChFace(0, 3, 0);
        Voice_PlayVoice("S0601000_A00300", #1, "");
        Message_Who(1);
        Message_MsgDisp("Saeki", "Well, ready to go?");
        }
    else if (Parameter_GetCh1Param(1, 130) == 3){
        Voice_PlayVoice("", 1, "S0601000_A00400");
        Message_Who(1);
        Message_MsgDisp("Saeki", "｛主人公｝.\nHappy New Year.");
        Message_Who(0);
        Message_MsgDisp("主人公", "Happy New Year!");
        if (Parameter_ChkPlayer(16) == 1){
            Character_ChFace(0, 0, 11);
            Voice_PlayVoice("S0601000_A00500", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "... A kimono.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Yeah. How is it?");
            Character_ChFace(0, 0, 6);
            Voice_PlayVoice("S0601000_A00600", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "Eh? Aah, well...\nI think it does and doesn't suit\nyou.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Which one is it?");
            Character_BlinkStart(1, 3, (#1));
            Voice_PlayVoice("S0601000_A00700", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "It suits you.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(He wasn't being honest...)");
            }
        Character_BlinkStart(1, 0, (#1));
        Character_ChFace(0, 2, 5);
        Character_ChFace(0, 3, 0);
        Voice_PlayVoice("S0601000_A00800", #1, "");
        Message_Who(1);
        Message_MsgDisp("Saeki", "Let's go.\nIt would be bad to be here any\nlonger.");
        }
    else {
        Voice_PlayVoice("", 1, "S0601000_A00900");
        Message_Who(1);
        Message_MsgDisp("Saeki", "｛主人公｝.\nHappy New Year.");
        Message_Who(0);
        Message_MsgDisp("主人公", "Happy New Year.");
        if (Parameter_ChkPlayer(16) == 1){
            Character_ChFace(0, 0, 11);
            Character_BlinkStart(1, 2, (#1));
            Voice_PlayVoice("S0601000_A01000", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "Heh... You put on a kimono.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Yes. How is it?");
            Character_ChFace(0, 0, 0);
            Voice_PlayVoice("S0601000_A01100", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "Aah... Yeah, I guess it's nice?");
            Message_Who(0);
            Message_MsgDisp("主人公", "Huh? You don't like it that much?");
            Character_ChFace(0, 0, 10);
            Character_BlinkStart(1, 2, (#1));
            Character_ChFace(0, 4, 1);
            Voice_PlayVoice("S0601000_A01200", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "No... I like it. Very much.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Good. He seemed to like it!)");
            }
        Character_ChFace(0, 0, 10);
        Character_ChFace(0, 4, 1);
        Voice_PlayVoice("S0601000_A01300", #1, "");
        Message_Who(1);
        Message_MsgDisp("Saeki", "Let's go. It'll get crowded soon.");
        }
    Message_CloseMsg();
    Music_StopBGM(0, 40);
    Screen_WipeOut(1);
    Screen_ClearScreen();
    if (Parameter_ChkPlayer(16) == 1){
        Parameter_AddCh1Param(1, 61, 10);
        Parameter_AddCh1Param(1, 60, 6);
        Parameter_AddCh1Param(1, 62, #10);
        }
    }
