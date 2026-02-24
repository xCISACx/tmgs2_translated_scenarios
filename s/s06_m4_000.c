section "s06_m4_000"{
    Background_Bg_GS2("BG_HO100_?_0", 1, #1, 0);
    System_Wait(10);
    Screen_WipeIn(2);
    SoundEffect_PlayStream(3, "SS_T_00_038_M00");
    System_Wait(120);
    SoundEffect_PlayStream(3, "SEQ_SE_EV_138");
    if (Parameter_GetCh1Param(4, 130) <= 2){
        Character_ChFace(0, 0, 10);
        Character_Chara_GS2(4, "M4_??F", 0);
        Voice_PlayVoice("S0604000_D00000", #1, "");
        Message_Who(4);
        Message_MsgDisp("Hariya", "Oookay, let's go!");
        Message_Who(0);
        Message_MsgDisp("主人公", "Happy New Year,\n｛Hariya＊＊｝.");
        Character_BlinkStart(4, 2, (#1));
        Voice_PlayVoice("S0604000_D00100", #1, "");
        Message_Who(4);
        Message_MsgDisp("Hariya", "Oh, you're being polite.\nHappy New Year.");
        if (Parameter_ChkPlayer(16) == 1){
            Character_ChFace(0, 0, 11);
            Character_BlinkStart(4, 2, (#1));
            Voice_PlayVoice("S0604000_D00200", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "Heh... So New Year-ish.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Huh?");
            Character_ChFace(0, 0, 10);
            Voice_PlayVoice("S0604000_D00300", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "That kimono suits you.\nI'll keep an eye on you at the\nshrine.");
            Message_Who(0);
            Message_MsgDisp("主人公", "T-Thank you.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(He liked it.... I think?)");
            }
        Character_ChFace(0, 0, 10);
        Voice_PlayVoice("S0604000_D00400", #1, "");
        Message_Who(4);
        Message_MsgDisp("Hariya", "Umm, well, let's go!");
        }
    else if (Parameter_GetCh1Param(4, 130) == 3){
        Character_ChFace(0, 0, 10);
        Character_Chara_GS2(4, "M4_??F", 0);
        Voice_PlayVoice("", 4, "S0604000_D00500");
        Message_Who(4);
        Message_MsgDisp("Hariya", "｛主人公｝.\nHappy New Year.");
        Message_Who(0);
        Message_MsgDisp("主人公", "*Giggles* Happy New Year!");
        if (Parameter_ChkPlayer(16) == 1){
            Character_ChFace(0, 2, 4);
            Character_BlinkStart(4, 2, (#1));
            Character_ChFace(0, 3, 5);
            Voice_PlayVoice("S0604000_D00600", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "Oh... You look like a proper girl.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Huh?");
            Character_ChFace(0, 2, 5);
            Character_ChFace(0, 3, 3);
            Voice_PlayVoice("S0604000_D00700", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "Here comes rainfall!");
            Message_Who(0);
            Message_MsgDisp("主人公", "That's awful!");
            Character_ChFace(0, 0, 10);
            Character_BlinkStart(4, 2, (#1));
            Voice_PlayVoice("S0604000_D00800", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "Hahaha, I'll protect you if it\nreally comes down somehow.\nSo rest easy!");
            Message_Who(0);
            Message_MsgDisp("主人公", "T-Thank you.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Great. He seemed to like it.)");
            }
        Character_ChFace(0, 0, 10);
        Voice_PlayVoice("S0604000_D00900", #1, "");
        Message_Who(4);
        Message_MsgDisp("Hariya", "Okay, let's head out!");
        }
    else {
        Character_ChFace(0, 0, 0);
        Character_Chara_GS2(4, "M4_??F", 0);
        Voice_PlayVoice("", 4, "S0604000_D01000");
        Message_Who(4);
        Message_MsgDisp("Hariya", "｛主人公｝.\nPlease keep me in mind this year!");
        Message_Who(0);
        Message_MsgDisp("主人公", "Okay!\nBut it is I who should say that, so\nplease keep me in mind.");
        if (Parameter_ChkPlayer(16) == 1){
            Character_ChFace(0, 0, 11);
            Character_ChFace(0, 4, 1);
            Voice_PlayVoice("S0604000_D01100", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "Wow!!");
            Message_Who(0);
            Message_MsgDisp("主人公", "I put on my best kimono.\nHow do I look?");
            Character_BlinkStart(4, 2, (#1));
            Voice_PlayVoice("S0604000_D01200", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "... It suits you...\nYou look beautiful...");
            Message_Who(0);
            Message_MsgDisp("主人公", "Huh?");
            Character_ChFace(0, 2, 2);
            Character_ChFace(0, 3, 1);
            Character_BlinkStart(4, 0, (#1));
            Character_ChFace(0, 4, 1);
            Voice_PlayVoice("S0604000_D01300", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "Ah! Hah... the kimono!\nYeah, the kimono.");
            Character_BlinkStart(4, 2, (#1));
            Character_ChFace(0, 3, 5);
            Voice_PlayVoice("S0604000_D01400", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "...\nYou being beautiful in it is just a\nbonus...");
            Message_Who(0);
            Message_MsgDisp("主人公", "T-Thank you...");
            Message_Who(0);
            Message_MsgDisp("主人公", "(He liked it... I think?\nI'm glad I wore the kimono.)");
            }
        Character_ChFace(0, 0, 0);
        Voice_PlayVoice("S0604000_D01500", #1, "");
        Message_Who(4);
        Message_MsgDisp("Hariya", "Umm... Let's go!");
        }
    Message_CloseMsg();
    Music_StopBGM(0, 40);
    Screen_WipeOut(1);
    Screen_ClearScreen();
    if (Parameter_ChkPlayer(16) == 1){
        Parameter_AddCh1Param(4, 61, 10);
        Parameter_AddCh1Param(4, 60, 6);
        Parameter_AddCh1Param(4, 62, #10);
        }
    }
