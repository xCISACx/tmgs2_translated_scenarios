section "b03_m6_090"{
    if (Parameter_GetCh1Param(6, 130) <= 2){
        Character_Chara_GS2(6, "M6_??F", 0, 1, 1);
        Background_Bg_GS2("BG_FP400_CO_0", #1, #1, 0);
        Screen_WipeIn(2);
        }
    else {
        Character_Chara_GS2(6, "M6_??F", 0, 1, 1);
        Character_ChFace(1, 3, 3);
        Background_Bg_GS2("BG_FP400_CO_0", #1, #1, 0);
        Screen_WipeIn(2);
        }
    if (Date_ChkDateOpen(25) == 1){
        if (Parameter_GetCh1Param(6, 130) <= 2){
            Voice_PlayVoice("B0306090_F00000", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "Do you have your ticket?\nThen let's enter.");
            }
        else {
            Voice_PlayVoice("B0306090_F00100", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "It feels like a field trip coming to\nthe museum....\nWell, that's okay.");
            }
        Message_CloseMsg();
        Screen_WipeOut(2);
        Screen_ClearScreen();
        System_Call_GS2("B04", "M6", 91);
        }
    else if (Date_ChkDateOpen(26) == 1){
        if (Parameter_GetCh1Param(6, 130) <= 2){
            Voice_PlayVoice("B0306090_F00200", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "Is this the glasswork exhibition?\nIt's a very beautiful thing.");
            }
        else {
            Voice_PlayVoice("B0306090_F00300", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "Oh, the glasswork exhibition.\nThis case is so-so.\nIs it interesting to you?");
            }
        Message_CloseMsg();
        Screen_WipeOut(2);
        Screen_ClearScreen();
        System_Call_GS2("B04", "M6", 92);
        }
    else if (Date_ChkDateOpen(27) == 1){
        if (Parameter_GetCh1Param(6, 130) <= 2){
            Voice_PlayVoice("B0306090_F00400", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "Is this the dinosaur exhibition?\nDoes it seem like the set of a movie\nto you?");
            }
        else {
            Voice_PlayVoice("B0306090_F00500", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "Even a dinosaur exhibition.\nDoes it seem like the set of a movie\nto you?");
            }
        Message_CloseMsg();
        Screen_WipeOut(2);
        Screen_ClearScreen();
        System_Call_GS2("B04", "M6", 93);
        }
    else if (Date_ChkDateOpen(28) == 1){
        if (Parameter_GetCh1Param(6, 130) <= 2){
            Voice_PlayVoice("B0306090_F00600", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "Gagi exhibition...\nSomehow, that name seems terrible.");
            }
        else {
            Voice_PlayVoice("B0306090_F00700", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "It's like the name of a villain from\nan animated cartoon.\nLet's enter!");
            }
        Message_CloseMsg();
        Screen_WipeOut(2);
        Screen_ClearScreen();
        System_Call_GS2("B04", "M6", 94);
        }
    else if (Date_ChkDateOpen(29) == 1){
        if (Parameter_GetCh1Param(6, 130) <= 2){
            Voice_PlayVoice("B0306090_F00800", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "This Mihara is a color artist from\nHabataki City.\nSomehow, it feels familiar.");
            }
        else {
            Voice_PlayVoice("B0306090_F00900", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "This Mihara is a color artist from\nHabataki City.\nI want to meet the real person.");
            }
        Message_CloseMsg();
        Screen_WipeOut(2);
        Screen_ClearScreen();
        System_Call_GS2("B04", "M6", 95);
        }
    }
