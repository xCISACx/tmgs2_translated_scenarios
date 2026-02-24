section "s07_m5_000"{
    Character_ChFace(0, 0, 11);
    Character_Chara_GS2(5, "M5_??F", 0);
    Background_Bg_GS2("BG_EX140_LI_0", #1, #1, 0);
    Screen_WipeIn(2);
    Music_PlayBGM(0, "MN_B_EX_140_000", 127, 40);
    if (Parameter_GetCh1Param(5, 130) <= 2){
        Voice_PlayVoice("S0705000_E00000", #1, "");
        Message_Who(5);
        Message_MsgDisp("Chris", "Woah, it's crowded...");
        Message_Who(0);
        Message_MsgDisp("主人公", "It can't be helped.\nIt is New Year's, after all.");
        Character_ChFace(0, 2, 2);
        Character_ChFace(0, 3, 3);
        Voice_PlayVoice("S0705000_E00100", #1, "");
        Message_Who(5);
        Message_MsgDisp("Chris", "I see...\nMight be troublesome if you got\nlost.");
        Voice_PlayVoice("S0705000_E00200", #1, "");
        Message_Who(5);
        Message_MsgDisp("Chris", "Well, let's take our time.\nWe're not in a hurry, anyway.");
        Message_Who(0);
        Message_MsgDisp("主人公", "Okay.");
        }
    else if (Parameter_GetCh1Param(5, 130) == 3){
        Voice_PlayVoice("S0705000_E00300", #1, "");
        Message_Who(5);
        Message_MsgDisp("Chris", "Woah, it's crowded...");
        Message_Who(0);
        Message_MsgDisp("主人公", "It can't be helped.\nIt is New Year's, after all.");
        Character_ChFace(0, 0, 10);
        Voice_PlayVoice("S0705000_E00400", #1, "");
        Message_Who(5);
        Message_MsgDisp("Chris", "In that case, we'll put full spirit\nin our prayers!");
        Character_ChFace(0, 2, 0);
        Character_BlinkStart(5, 2, (#1));
        Character_ChFace(0, 3, 3);
        Voice_PlayVoice("S0705000_E00500", #1, "");
        Message_Who(5);
        Message_MsgDisp("Chris", "However, this is nice, too.\nSince we don't celebrate it.");
        Message_Who(0);
        Message_MsgDisp("主人公", "Ahh, I see.");
        Voice_PlayVoice("S0705000_E00600", #1, "");
        Message_Who(5);
        Message_MsgDisp("Chris", "Yeah.\nIt's normal for our family just to\nstay at home on New Year's Day.");
        Voice_PlayVoice("S0705000_E00700", #1, "");
        Message_Who(5);
        Message_MsgDisp("Chris", "On that note, maybe I should build\nup the courage to suggest this on\nChristmas.");
        Message_Who(0);
        Message_MsgDisp("主人公", "I see.");
        }
    else {
        Voice_PlayVoice("S0705000_E00800", #1, "");
        Message_Who(5);
        Message_MsgDisp("Chris", "Woah, what an intense crowd.");
        Message_Who(0);
        Message_MsgDisp("主人公", "It really is intense.");
        Character_ChFace(0, 2, 2);
        Character_ChFace(0, 3, 3);
        Character_ChFace(0, 4, 1);
        Voice_PlayVoice("S0705000_E00900", #1, "");
        Message_Who(5);
        Message_MsgDisp("Chris", "Hmm... Hey, can we... hold hands?");
        Message_Who(0);
        Message_MsgDisp("主人公", "Huh?");
        Character_ChFace(0, 0, 11);
        Character_BlinkStart(5, 2, (#1));
        Character_ChFace(0, 4, 1);
        Voice_PlayVoice("S0705000_E01000", #1, "");
        Message_Who(5);
        Message_MsgDisp("Chris", "D-Don't take this the wrong way,\nokay?\nIt's just so you don't get lost!");
        Message_Who(0);
        Message_MsgDisp("主人公", "O-Okay...");
        Character_ChFace(0, 0, 10);
        Character_ChFace(0, 4, 1);
        Voice_PlayVoice("S0705000_E01100", #1, "");
        Message_Who(5);
        Message_MsgDisp("Chris", "Ah!\nIn that case, if holding hands means\nsomething different to you, then\nI'll lend you my arm instead.");
        Voice_PlayVoice("S0705000_E01200", #1, "");
        Message_Who(5);
        Message_MsgDisp("Chris", "C'mon, it's an escort. Okay?");
        Message_Who(0);
        Message_MsgDisp("主人公", "Oh, okay.\nWell then, I'm borrowing it...");
        }
    Message_CloseMsg();
    Screen_WipeOut(1);
    Screen_ClearScreen();
    }
