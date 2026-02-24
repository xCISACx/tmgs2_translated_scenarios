section "b03_m1_090"{
    if (Date_ChkDateOpen(25) == 1){
        Character_Chara_GS2(1, "M1_??F", 0, 1, 1);
        Character_ChFace(1, 2, 3);
        Character_ChFace(1, 3, 2);
        Background_Bg_GS2("BG_FP400_CO_0", #1, #1, 0);
        Screen_WipeIn(2);
        Voice_PlayVoice("B0301090_A00000", #1, "");
        Message_Who(1);
        Message_MsgDisp("Saeki", "It would be nice if there were\ninteresting things on display.\nLet's go.");
        Message_CloseMsg();
        Screen_WipeOut(2);
        Screen_ClearScreen();
        System_Call_GS2("B04", "M1", 91);
        }
    else if (Date_ChkDateOpen(26) == 1){
        Character_Chara_GS2(1, "M1_??F", 0, 1, 1);
        Character_ChFace(1, 2, 3);
        Character_ChFace(1, 3, 1);
        Background_Bg_GS2("BG_FP400_CO_0", #1, #1, 0);
        Screen_WipeIn(2);
        Voice_PlayVoice("B0301090_A00100", #1, "");
        Message_Who(1);
        Message_MsgDisp("Saeki", "There's a Glasswork Exhibit showing.\nSince we're here, do you wanna go\nsee it?");
        Message_CloseMsg();
        Screen_WipeOut(2);
        Screen_ClearScreen();
        System_Call_GS2("B04", "M1", 92);
        }
    else if (Date_ChkDateOpen(27) == 1){
        Character_Chara_GS2(1, "M1_??F", 0, 1, 1);
        Character_ChFace(1, 2, 3);
        Character_ChFace(1, 3, 2);
        Background_Bg_GS2("BG_FP400_CO_0", #1, #1, 0);
        Screen_WipeIn(2);
        Voice_PlayVoice("B0301090_A00200", #1, "");
        Message_Who(1);
        Message_MsgDisp("Saeki", "Oh, a dinosaur fossil exhibit.\nLet's go.");
        Message_CloseMsg();
        Screen_WipeOut(2);
        Screen_ClearScreen();
        System_Call_GS2("B04", "M1", 93);
        }
    else if (Date_ChkDateOpen(28) == 1){
        Character_Chara_GS2(1, "M1_??F", 0, 1, 1);
        Character_ChFace(1, 2, 3);
        Character_ChFace(1, 3, 1);
        Background_Bg_GS2("BG_FP400_CO_0", #1, #1, 0);
        Screen_WipeIn(2);
        Voice_PlayVoice("B0301090_A00300", #1, "");
        Message_Who(1);
        Message_MsgDisp("Saeki", "A master of design has come to\nJapan!\n... That's what they're advertising.\nShould we take a look?");
        Message_CloseMsg();
        Screen_WipeOut(2);
        Screen_ClearScreen();
        System_Call_GS2("B04", "M1", 94);
        }
    else if (Date_ChkDateOpen(29) == 1){
        Character_Chara_GS2(1, "M1_??F", 0, 1, 1);
        Character_ChFace(1, 2, 3);
        Character_ChFace(1, 3, 0);
        Background_Bg_GS2("BG_FP400_CO_0", #1, #1, 0);
        Screen_WipeIn(2);
        Voice_PlayVoice("B0301090_A00400", #1, "");
        Message_Who(1);
        Message_MsgDisp("Saeki", "Ah, I know this person.\nThey're a local artist, right?\nLet's go take a look.");
        Message_CloseMsg();
        Screen_WipeOut(2);
        Screen_ClearScreen();
        System_Call_GS2("B04", "M1", 95);
        }
    }
