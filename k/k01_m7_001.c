section "k01_m7_001"{
    Character_BlinkStart(7, 1, (#1), 1);
    Character_BlinkStart(7, 1, (#1), 2);
    Character_ChFace(0, 0, 0);
    Character_ChFace(1, 0, 0);
    Music_PlayBGM(0, "MN_C_07_002_D00", 127, 40);
    Character_Chara_GS2(7, "M7_01F", 0);
    Background_Bg_GS2("BG_SC210_?_0", 1, #1, 0);
    Screen_WipeIn(2);
    if (Parameter_GetCh1Param(7, 130) <= 2){
        Message_Who(0);
        Message_MsgDisp("主人公", "｛Wakaouji＊＊｝!");
        Character_ChFace(0, 0, 11);
        Character_BlinkStart(7, 2, (#1));
        Voice_PlayVoice("", 7, "K0107000_G00000");
        Message_Who(7);
        Message_MsgDisp("Wakaouji", "｛主人公｝.\nWhat is the matter?");
        Message_Who(0);
        Message_MsgDisp("主人公", "Today is your birthday, right,\n｛Wakaouji＊＊｝?\nThis is a present!");
        Character_ChFace(0, 2, 2);
        Character_ChFace(0, 3, 0);
        Voice_PlayVoice("K0107000_G00100", #1, "");
        Message_Who(7);
        Message_MsgDisp("Wakaouji", "Ah... It is unfortunate.");
        Message_Who(0);
        Message_MsgDisp("主人公", "Eh?");
        Voice_PlayVoice("K0107000_G00200", #1, "");
        Message_Who(7);
        Message_MsgDisp("Wakaouji", "The vice principal has been warning\nme all morning about accepting\nbirthday presents from the students.");
        Message_Who(0);
        Message_MsgDisp("主人公", "Is that so...");
        Voice_PlayVoice("K0107000_G00300", #1, "");
        Message_Who(7);
        Message_MsgDisp("Wakaouji", "Yes. I am sorry.");
        Message_Who(0);
        Message_MsgDisp("主人公", "(He couldn't accept it...)");
        }
    else if (Parameter_GetCh1Param(7, 130) == 3){
        Message_Who(0);
        Message_MsgDisp("主人公", "｛Wakaouji＊＊｝!");
        Voice_PlayVoice("", 7, "K0107000_G00400");
        Message_Who(7);
        Message_MsgDisp("Wakaouji", "｛主人公｝.\nWhat is the matter?");
        Message_Who(0);
        Message_MsgDisp("主人公", "Today is your birthday, right,\n｛Wakaouji＊＊｝?");
        Character_ChFace(0, 0, 11);
        Character_BlinkStart(7, 2, (#1));
        Voice_PlayVoice("K0107000_G00500", #1, "");
        Message_Who(7);
        Message_MsgDisp("Wakaouji", "Ah, yes it is.");
        Message_Who(0);
        Message_MsgDisp("主人公", "Yes! Here, it's a present.");
        Character_ChFace(0, 2, 1);
        Character_ChFace(0, 3, 2);
        Voice_PlayVoice("K0107000_G00600", #1, "");
        Message_Who(7);
        Message_MsgDisp("Wakaouji", "\"Wakaouji-kun, do not accept\npresents from the students.\nMake the distinction between your\nofficial and personal life\".");
        Message_Who(0);
        Message_MsgDisp("主人公", "Ah, is that what the vice principal\nsaid?");
        Character_ChFace(0, 2, 2);
        Character_ChFace(0, 3, 0);
        Voice_PlayVoice("K0107000_G00700", #1, "");
        Message_Who(7);
        Message_MsgDisp("Wakaouji", "Correct. So I am sorry.");
        Message_Who(0);
        Message_MsgDisp("主人公", "I see...");
        Character_ChFace(0, 2, 0);
        Character_BlinkStart(7, 3, (#1));
        Character_ChFace(0, 3, 3);
        Voice_PlayVoice("K0107000_G00800", #1, "");
        Message_Who(7);
        Message_MsgDisp("Wakaouji", "But thank you for remembering my\nbirthday.\nI am very glad.");
        Message_Who(0);
        Message_MsgDisp("主人公", "(He couldn't accept it...)");
        }
    else {
        Message_Who(0);
        Message_MsgDisp("主人公", "｛Wakaouji＊＊｝!");
        Voice_PlayVoice("", 7, "K0107000_G00900");
        Message_Who(7);
        Message_MsgDisp("Wakaouji", "｛主人公｝.\nWhat is the matter?");
        Message_Who(0);
        Message_MsgDisp("主人公", "Today is your birthday, right,\n｛Wakaouji＊＊｝?");
        Character_ChFace(0, 2, 4);
        Character_BlinkStart(7, 2, (#1));
        Character_ChFace(0, 3, 2);
        Voice_PlayVoice("K0107000_G01000", #1, "");
        Message_Who(7);
        Message_MsgDisp("Wakaouji", "Is it?");
        Message_Who(0);
        Message_MsgDisp("主人公", "Eh?\nToday's the 4th of September, right?");
        Voice_PlayVoice("K0107000_G01100", #1, "");
        Message_Who(7);
        Message_MsgDisp("Wakaouji", "Ah... You're right.");
        Message_Who(0);
        Message_MsgDisp("主人公", "Geez, ｛Wakaouji＊＊｝.\nDid you forget?\nHere, it's a present.");
        Character_ChFace(0, 2, 4);
        Character_BlinkStart(7, 2, (#1));
        Character_ChFace(0, 3, 3);
        Voice_PlayVoice("K0107000_G01200", #1, "");
        Message_Who(7);
        Message_MsgDisp("Wakaouji", "Thank you very much for remembering\nmy birthday.\nI am glad.");
        Message_Who(0);
        Message_MsgDisp("主人公", "You're welcome.\nWon't you get yelled at by the vice\nprincipal for getting presents from\nthe students?");
        Character_ChFace(0, 2, 0);
        Character_ChFace(0, 3, 3);
        Voice_PlayVoice("K0107000_G01300", #1, "");
        Message_Who(7);
        Message_MsgDisp("Wakaouji", "I will get yelled at a lot.\nIf he finds out.\nSo let us keep it a secret between\nus.");
        if ((Parameter_GetCh1Param(7, 67) == 1) && (Parameter_GetCh1Param(7, 130) >= 4)){
            Character_ChFace(0, 2, 4);
            Character_BlinkStart(7, 2, (#1));
            Character_ChFace(0, 3, 3);
            Voice_PlayVoice("K0107000_G01400", #1, "");
            Message_Who(7);
            Message_MsgDisp("Wakaouji", "Ah, this is nice!\nI am extremely glad. Thank you.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yay!\nIt looks like he's really happy!)");
            }
        else if ((Parameter_GetCh1Param(7, 67) == 2) && (Parameter_GetCh1Param(7, 130) >= 4)){
            Character_ChFace(0, 2, 5);
            Character_ChFace(0, 3, 3);
            Voice_PlayVoice("K0107000_G01500", #1, "");
            Message_Who(7);
            Message_MsgDisp("Wakaouji", "Ah, this looks interesting.\nThank you.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yeah, it looks like he's relatively\nhappy.)");
            }
        else if ((Parameter_GetCh1Param(7, 67) == 3) && (Parameter_GetCh1Param(7, 130) >= 4)){
            Character_ChFace(0, 2, 2);
            Character_ChFace(0, 3, 3);
            Voice_PlayVoice("K0107000_G01600", #1, "");
            Message_Who(7);
            Message_MsgDisp("Wakaouji", "Sorry.\nIt seems like I confused you...");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Hmm, it looks like he's not that\nhappy about it...)");
            }
        }
    Message_CloseMsg();
    Music_StopBGM(0, 40);
    Screen_WipeOut(2);
    Screen_ClearScreen();
    if (Parameter_GetCh1Param(7, 67) == 1){
        Parameter_AddCh1Param(7, 61, 3);
        Parameter_AddCh1Param(7, 60, 2);
        }
    else if (Parameter_GetCh1Param(7, 67) == 2){
        Parameter_AddCh1Param(7, 61, 1);
        Parameter_AddCh1Param(7, 60, 0);
        }
    else if (Parameter_GetCh1Param(7, 67) == 3){
        Parameter_AddCh1Param(7, 61, #1);
        Parameter_AddCh1Param(7, 60, #2);
        }
    Parameter_AddCh1Param(7, 86, 1);
    }
