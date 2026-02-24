section "s06_m2_000"{
    Background_Bg_GS2("BG_HO100_?_0", 1, #1, 0);
    System_Wait(10);
    Screen_WipeIn(2);
    SoundEffect_PlayStream(3, "SS_T_00_038_M00");
    System_Wait(120);
    SoundEffect_PlayStream(3, "SEQ_SE_EV_138");
    if (Parameter_GetCh1Param(2, 130) <= 2){
        Character_ChFace(0, 0, 0);
        Character_Chara_GS2(2, "M2_??F", 0);
        Voice_PlayVoice("", 2, "");
        Message_Who(2);
        Message_MsgDisp("Shiba", "｛主人公｝.");
        Voice_PlayVoice("S0602000_B00000", #1, "");
        Message_Who(2);
        Message_MsgDisp("Shiba", "Sorry for making you wait. Let's go.");
        Message_Who(0);
        Message_MsgDisp("主人公", "Okay.");
        if (Parameter_ChkPlayer(16) == 1){
            Voice_PlayVoice("S0602000_B00100", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "...\nHuh, must be because of the New\nYear.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Ehh?");
            Character_ChFace(0, 0, 10);
            Voice_PlayVoice("S0602000_B00200", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "The kimono.\nIt suits you, surprisingly.");
            Message_Who(0);
            Message_MsgDisp("主人公", "T-Thank you.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Great! He seems to like it.)");
            }
        Character_ChFace(0, 0, 3);
        Voice_PlayVoice("S0602000_B00300", #1, "");
        Message_Who(2);
        Message_MsgDisp("Shiba", "Well... Let's go.");
        }
    else if (Parameter_GetCh1Param(2, 130) == 3){
        Character_ChFace(0, 0, 0);
        Character_Chara_GS2(2, "M2_??F", 0);
        Voice_PlayVoice("", 2, "");
        Message_Who(2);
        Message_MsgDisp("Shiba", "｛主人公｝.");
        Message_Who(0);
        Message_MsgDisp("主人公", "Happy New Year,\n｛Shiba＊＊｝.");
        Character_ChFace(0, 0, 10);
        Character_BlinkStart(2, 2, (#1));
        Voice_PlayVoice("S0602000_B00400", #1, "");
        Message_Who(2);
        Message_MsgDisp("Shiba", "Yeah....\nMy best regards for this year.");
        Message_Who(0);
        Message_MsgDisp("主人公", "I should be saying that!");
        if (Parameter_ChkPlayer(16) == 1){
            Character_ChFace(0, 0, 11);
            Character_BlinkStart(2, 2, (#1));
            Voice_PlayVoice("S0602000_B00500", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "... Heh.");
            Message_Who(0);
            Message_MsgDisp("主人公", "What's wrong? Do I look strange?");
            Character_ChFace(0, 0, 10);
            Character_BlinkStart(2, 2, (#1));
            Voice_PlayVoice("S0602000_B00600", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "No... It's a nice kimono.\nIt has a New Year feeling to it.");
            Message_Who(0);
            Message_MsgDisp("主人公", "*Giggles* Thank you.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Great! He seemed to like it!)");
            }
        Character_ChFace(0, 0, 10);
        Voice_PlayVoice("S0602000_B00700", #1, "");
        Message_Who(2);
        Message_MsgDisp("Shiba", "Okay, let's go.");
        }
    else {
        Character_ChFace(0, 0, 10);
        Character_ChFace(0, 4, 1);
        Character_BlinkStart(2, 2, (#1));
        Character_Chara_GS2(2, "M2_??F", 0);
        Voice_PlayVoice("S0602000_B00800", #1, "");
        Message_Who(2);
        Message_MsgDisp("Shiba", "... Happy New Year.\nBe nice to me again this year.");
        Message_Who(0);
        Message_MsgDisp("主人公", "Huh!?");
        Character_ChFace(0, 0, 11);
        Voice_PlayVoice("S0602000_B00900", #1, "");
        Message_Who(2);
        Message_MsgDisp("Shiba", "...............");
        Character_ChFace(0, 0, 8);
        Character_ChFace(0, 4, 1);
        Voice_PlayVoice("S0602000_B01000", #1, "");
        Message_Who(2);
        Message_MsgDisp("Shiba", "... Nothing. I tricked you...");
        Message_Who(0);
        Message_MsgDisp("主人公", "(What the heck does he mean by\ntricked me...?)");
        if (Parameter_ChkPlayer(16) == 1){
            Voice_PlayVoice("S0602000_B01100", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "... Oi.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Huh? What is it?");
            Voice_PlayVoice("S0602000_B01200", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "... Are you going out like that?");
            Message_Who(0);
            Message_MsgDisp("主人公", "Yeah. That's the plan.");
            Character_ChFace(0, 2, 1);
            Character_BlinkStart(2, 3, (#1));
            Character_ChFace(0, 3, 3);
            Voice_PlayVoice("S0602000_B01300", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "...\nYou're standing out more than you\nnormally do...\nIt's good that I'm here to protect\nyou.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Huh?");
            Character_BlinkStart(2, 2, (#1));
            Character_ChFace(0, 2, 1);
            Character_ChFace(0, 3, 5);
            Voice_PlayVoice("S0602000_B01400", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "... Nothing. It suits you.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Great! He seems to like it!)");
            }
        Character_ChFace(0, 0, 0);
        Voice_PlayVoice("S0602000_B01500", #1, "");
        Message_Who(2);
        Message_MsgDisp("Shiba", "Well... Let's go soon.");
        }
    Message_CloseMsg();
    Music_StopBGM(0, 40);
    Screen_WipeOut(1);
    Screen_ClearScreen();
    if (Parameter_ChkPlayer(16) == 1){
        Parameter_AddCh1Param(2, 61, 10);
        Parameter_AddCh1Param(2, 60, 6);
        Parameter_AddCh1Param(2, 62, #10);
        }
    }
