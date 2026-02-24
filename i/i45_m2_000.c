section "i45_m2_000"{
    Background_Bg_GS2("BG_AR400_?_0", 1, #1, 0);
    Character_ChFace(0, 0, 0);
    Character_Chara_GS2(2, "M2_??F", 0);
    Screen_WipeIn(2);
    if (Parameter_GetCh1Param(2, 130) <= 2){
        Voice_PlayVoice("I4502000_B00000", #1, "");
        Message_Who(2);
        Message_MsgDisp("Shiba", "... So you work here.");
        Message_Who(0);
        Message_MsgDisp("主人公", "Yeah.\nIf there's something good here, I'll\ntell you about it.");
        Voice_PlayVoice("I4502000_B00100", #1, "");
        Message_Who(2);
        Message_MsgDisp("Shiba", "Yeah.");
        }
    else if (Parameter_GetCh1Param(2, 130) == 3){
        Message_Who(0);
        Message_MsgDisp("主人公", "Welcome. Ah, ｛Shiba＊＊｝.\nAre you shopping?");
        Character_ChFace(0, 2, 3);
        Character_ChFace(0, 3, 4);
        Voice_PlayVoice("I4502000_B00200", #1, "");
        Message_Who(2);
        Message_MsgDisp("Shiba", "... Yeah.\nGot any kinda shirts that I could\nwear under a jersey?");
        Message_Who(0);
        Message_MsgDisp("主人公", "W-Well, that's kind of...");
        Character_ChFace(0, 2, 5);
        Character_ChFace(0, 3, 3);
        Voice_PlayVoice("I4502000_B00300", #1, "");
        Message_Who(2);
        Message_MsgDisp("Shiba", "... I thought so.");
        Character_Chara_GS2(2, "NON");
        Message_Who(0);
        Message_MsgDisp("主人公", "(.........)");
        }
    else {
        Message_Who(0);
        Message_MsgDisp("主人公", "Welcome, ｛Shiba＊＊｝.");
        Character_ChFace(0, 2, 5);
        Character_ChFace(0, 3, 4);
        Voice_PlayVoice("I4502000_B00400", #1, "");
        Message_Who(2);
        Message_MsgDisp("Shiba", "Got anything that is good for a\npresent?");
        Message_Who(0);
        Message_MsgDisp("主人公", "Hmm...\nI would probably choose small goods.\nWe have some cute things here.");
        Voice_PlayVoice("I4502000_B00500", #1, "");
        Message_Who(2);
        Message_MsgDisp("Shiba", "I see...");
        Message_Who(0);
        Message_MsgDisp("主人公", "Are you giving it to someone as a\npresent?");
        Character_ChFace(0, 2, 5);
        Character_BlinkStart(2, 3, (#1));
        Character_ChFace(0, 3, 0);
        Voice_PlayVoice("I4502000_B00600", #1, "");
        Message_Who(2);
        Message_MsgDisp("Shiba", "............ No.\nI'm collecting info.");
        Message_Who(0);
        Message_MsgDisp("主人公", "Eh?");
        Character_BlinkStart(2, 0, (#1));
        Character_ChFace(0, 2, 5);
        Character_ChFace(0, 3, 3);
        Voice_PlayVoice("I4502000_B00700", #1, "");
        Message_Who(2);
        Message_MsgDisp("Shiba", "Later. I'll come by, again.");
        Message_Who(0);
        Message_MsgDisp("主人公", "(\"Collecting info\"...\nWhat exactly for...?)");
        }
    Message_CloseMsg();
    Screen_WipeOut(1);
    Screen_ClearScreen();
    Parameter_AddCh1Param(2, 86, 1);
    }
