section "s06_m5_000"{
    Background_Bg_GS2("BG_HO100_?_0", 1, #1, 0);
    System_Wait(10);
    Screen_WipeIn(2);
    SoundEffect_PlayStream(3, "SS_T_00_038_M00");
    System_Wait(120);
    SoundEffect_PlayStream(3, "SEQ_SE_EV_138");
    if (Parameter_GetCh1Param(5, 130) <= 2){
        Character_ChFace(0, 0, 10);
        Character_Chara_GS2(5, "M5_??F", 0);
        Voice_PlayVoice("S0605000_E00000", #1, "");
        Message_Who(5);
        Message_MsgDisp("Chris", "Hello. Are you ready?");
        Message_Who(0);
        Message_MsgDisp("主人公", "Yeah, I'm ready.");
        if (Parameter_ChkPlayer(16) == 1){
            Character_ChFace(0, 0, 11);
            Character_BlinkStart(5, 2, (#1));
            Voice_PlayVoice("S0605000_E00100", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "Woah... A kimono...");
            Message_Who(0);
            Message_MsgDisp("主人公", "Yeah, I decided to wear one.\nWhat do you think?");
            Character_ChFace(0, 2, 0);
            Character_ChFace(0, 3, 3);
            Voice_PlayVoice("S0605000_E00200", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "Such an artsy garment...\nIt's so beautiful...");
            Message_Who(0);
            Message_MsgDisp("主人公", "*Giggles* Thank you.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(He seemed to only compliment the\nkimono...)");
            }
        Character_ChFace(0, 0, 3);
        Voice_PlayVoice("S0605000_E00300", #1, "");
        Message_Who(5);
        Message_MsgDisp("Chris", "Well then, let's go.");
        }
    else if (Parameter_GetCh1Param(5, 130) == 3){
        Character_BlinkStart(5, 2, (#1));
        Character_ChFace(0, 3, 3);
        Character_Chara_GS2(5, "M5_??F", 0);
        Voice_PlayVoice("", 5, "S0605000_E00400");
        Message_Who(5);
        Message_MsgDisp("Chris", "｛主人公｝.\nI've kept you waiting!\nHave you been looking out for me?");
        Message_Who(0);
        Message_MsgDisp("主人公", "*Giggles* A bit.");
        if (Parameter_ChkPlayer(16) == 1){
            Character_ChFace(0, 2, 0);
            Character_ChFace(0, 3, 4);
            Voice_PlayVoice("S0605000_E00500", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "Oh, your best clothes, I see.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Yeah. What do you think?");
            Character_ChFace(0, 2, 3);
            Character_BlinkStart(5, 3, (#1));
            Character_ChFace(0, 3, 5);
            Voice_PlayVoice("S0605000_E00600", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "Very cute!\nIt suits you well, you know?");
            Message_Who(0);
            Message_MsgDisp("主人公", "Really?");
            Character_ChFace(0, 2, 0);
            Character_BlinkStart(5, 2, (#1));
            Character_ChFace(0, 3, 3);
            Voice_PlayVoice("S0605000_E00700", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "Yeah.\nI'm in a mood to be a magistrate...\nTurning round and round...");
            Message_Who(0);
            Message_MsgDisp("主人公", "... Round and round?");
            Message_Who(0);
            Message_MsgDisp("主人公", "(He praised me for once... right?)");
            }
        Character_ChFace(0, 0, 10);
        Voice_PlayVoice("S0605000_E00800", #1, "");
        Message_Who(5);
        Message_MsgDisp("Chris", "In that case, let's get going!");
        }
    else {
        Character_ChFace(0, 0, 10);
        Character_Chara_GS2(5, "M5_??F", 0);
        Voice_PlayVoice("S0605000_E00900", #1, "");
        Message_Who(5);
        Message_MsgDisp("Chris", "Happy New Year.\nI came to pick you up, Princess.");
        Message_Who(0);
        Message_MsgDisp("主人公", "*Giggles* Happy New Year,\n｛Chris＊＊｝.");
        if (Parameter_ChkPlayer(16) == 1){
            Character_ChFace(0, 2, 2);
            Character_ChFace(0, 3, 3);
            Voice_PlayVoice("S0605000_E01000", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "... I wonder if it's alright...");
            Message_Who(0);
            Message_MsgDisp("主人公", "Huh? About what?");
            Voice_PlayVoice("S0605000_E01100", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "Just being together with you,\nespecially on New Year's Day.\nMakes me feel so happy.");
            Character_ChFace(0, 2, 0);
            Character_BlinkStart(5, 2, (#1));
            Character_ChFace(0, 3, 3);
            Voice_PlayVoice("S0605000_E01200", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "You've even made me look at you in\nyour kimono.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Is it weird?");
            Character_ChFace(0, 2, 0);
            Character_ChFace(0, 3, 4);
            Character_ChFace(0, 4, 1);
            Voice_PlayVoice("S0605000_E01300", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "It's ridiculous to call it weird!\nIf you say that, then you're weird!");
            Message_Who(0);
            Message_MsgDisp("主人公", "Ugh... Sorry.");
            Character_ChFace(0, 2, 5);
            Character_BlinkStart(5, 3, (#1));
            Character_ChFace(0, 3, 3);
            Character_ChFace(0, 4, 1);
            Voice_PlayVoice("S0605000_E01400", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "Oh, no, I meant! Umm... yeah.\nHonestly... umm...");
            Message_Who(0);
            Message_MsgDisp("主人公", "(He seems to like it. Great!)");
            }
        Character_ChFace(0, 0, 0);
        Voice_PlayVoice("S0605000_E01500", #1, "");
        Message_Who(5);
        Message_MsgDisp("Chris", "In that case, let's get going.");
        }
    Message_CloseMsg();
    Music_StopBGM(0, 40);
    Screen_WipeOut(1);
    Screen_ClearScreen();
    if (Parameter_ChkPlayer(16) == 1){
        Parameter_AddCh1Param(5, 61, 10);
        Parameter_AddCh1Param(5, 60, 6);
        Parameter_AddCh1Param(5, 62, #10);
        }
    }
