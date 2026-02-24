section "s06_m3_000"{
    Background_Bg_GS2("BG_HO100_?_0", 1, #1, 0);
    System_Wait(10);
    Screen_WipeIn(2);
    SoundEffect_PlayStream(3, "SS_T_00_038_M00");
    System_Wait(120);
    SoundEffect_PlayStream(3, "SEQ_SE_EV_138");
    if (Parameter_GetCh1Param(3, 130) <= 2){
        Character_ChFace(0, 0, 10);
        Character_Chara_GS2(3, "M3_??F", 0);
        Voice_PlayVoice("S0603000_C00000", #1, "");
        Message_Who(3);
        Message_MsgDisp("Hikami", "Happy New Year.");
        Message_Who(0);
        Message_MsgDisp("主人公", "Happy New Year!");
        if (Parameter_ChkPlayer(16) == 1){
            Character_ChFace(0, 0, 11);
            Character_BlinkStart(3, 2, (#1));
            Voice_PlayVoice("S0603000_C00100", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "... A kimono.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Yes. How is it?");
            Character_ChFace(0, 2, 0);
            Character_ChFace(0, 3, 2);
            Voice_PlayVoice("S0603000_C00200", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "Aah, it seems very New Year-like.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Thank you.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(I guess I was praised...?)");
            }
        Character_ChFace(0, 0, 10);
        Voice_PlayVoice("S0603000_C00300", #1, "");
        Message_Who(3);
        Message_MsgDisp("Hikami", "You did not forget anything, right?\nThen let's go.");
        }
    else if (Parameter_GetCh1Param(3, 130) == 3){
        Character_ChFace(0, 2, 0);
        Character_ChFace(0, 3, 3);
        Character_Chara_GS2(3, "M3_??F", 0);
        Voice_PlayVoice("", 3, "S0603000_C00400");
        Message_Who(3);
        Message_MsgDisp("Hikami", "｛主人公｝.\nHappy New Year.");
        Message_Who(0);
        Message_MsgDisp("主人公", "Happy New Year!");
        if (Parameter_ChkPlayer(16) == 1){
            Character_ChFace(0, 2, 4);
            Character_BlinkStart(3, 2, (#1));
            Character_ChFace(0, 3, 3);
            Voice_PlayVoice("S0603000_C00500", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "... You are wearing a kimono.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Yes. How is it?");
            Character_ChFace(0, 2, 0);
            Character_ChFace(0, 3, 3);
            Voice_PlayVoice("S0603000_C00600", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "It gives off the New Year spirit.\nYou did well.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Thank you.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(... I guess I was praised?)");
            }
        Character_ChFace(0, 0, 10);
        Voice_PlayVoice("S0603000_C00700", #1, "");
        Message_Who(3);
        Message_MsgDisp("Hikami", "You prepared well.\nLet us leave at once.");
        }
    else {
        Character_ChFace(0, 2, 0);
        Character_ChFace(0, 3, 3);
        Character_ChFace(0, 4, 1);
        Character_Chara_GS2(3, "M3_??F", 0);
        Voice_PlayVoice("", 3, "S0603000_C00800");
        Message_Who(3);
        Message_MsgDisp("Hikami", "｛主人公｝.\nHappy New Year.");
        Message_Who(0);
        Message_MsgDisp("主人公", "Happy New Year.");
        if (Parameter_ChkPlayer(16) == 1){
            Character_ChFace(0, 2, 4);
            Character_ChFace(0, 3, 5);
            Voice_PlayVoice("S0603000_C00900", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "... I'm astonished.");
            Message_Who(0);
            Message_MsgDisp("主人公", "｛Hikami＊＊｝?");
            Voice_PlayVoice("S0603000_C01000", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "You... are wearing a kimono.\nYou did not mention such a thing\nover the phone.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Yeah, I did my best! ... How is it?");
            Character_ChFace(0, 2, 0);
            Character_ChFace(0, 3, 3);
            Character_ChFace(0, 4, 1);
            Voice_PlayVoice("S0603000_C01100", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "... It is because of the kimono.\nIt seems New Year-ish and colorful.\nA great difference from your\nusual...");
            Message_Who(0);
            Message_MsgDisp("主人公", "Huh...?");
            Character_ChFace(0, 2, 4);
            Character_ChFace(0, 3, 5);
            Voice_PlayVoice("S0603000_C01200", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "Ah, nothing!\nDo not misunderstand me.\nYour uniform is not this colorful,\ncorrect?");
            Character_ChFace(0, 0, 10);
            Character_BlinkStart(3, 3, (#1));
            Character_ChFace(0, 4, 1);
            Voice_PlayVoice("S0603000_C01300", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "You, umm...\nI meant the new appeal looks nice.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Great, he liked it!)");
            }
        Character_ChFace(0, 0, 0);
        Character_ChFace(0, 3, 3);
        Voice_PlayVoice("S0603000_C01400", #1, "");
        Message_Who(3);
        Message_MsgDisp("Hikami", "Are you ready? ...\nWell, let us escape to the shrine at\nease.");
        }
    Message_CloseMsg();
    Music_StopBGM(0, 40);
    Screen_WipeOut(1);
    Screen_ClearScreen();
    if (Parameter_ChkPlayer(16) == 1){
        Parameter_AddCh1Param(3, 61, 10);
        Parameter_AddCh1Param(3, 60, 6);
        Parameter_AddCh1Param(3, 62, #10);
        }
    }
