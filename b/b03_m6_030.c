section "b03_m6_030"{
    if ((Date_ChkDateOpen(5) == 0) && (Date_ChkDateOpen(6) == 0)){
        if (Parameter_GetCh1Param(6, 130) <= 2){
            Character_Chara_GS2(6, "M6_??F", 0, 1, 1);
            Background_Bg_GS2("BG_WF300_?_0", 1, #1, 0);
            Screen_WipeIn(2);
            Voice_PlayVoice("B0306030_F00000", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "Well then, shall we enter?");
            }
        else {
            Character_Chara_GS2(6, "M6_??F", 0, 1, 1);
            Character_ChFace(1, 3, 3);
            Background_Bg_GS2("BG_WF300_?_0", 1, #1, 0);
            Screen_WipeIn(2);
            Voice_PlayVoice("B0306030_F00100", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "Let's get going!");
            }
        Message_CloseMsg();
        Screen_WipeOut(2);
        Screen_ClearScreen();
        System_Call_GS2("B04", "M6", 31);
        }
    else if ((Date_ChkDateOpen(5) == 1) && (Date_ChkDateOpen(6) == 0)){
        if (Parameter_GetCh1Param(6, 130) <= 2){
            Character_Chara_GS2(6, "M6_??F", 0, 1, 1);
            Background_Bg_GS2("BG_WF300_?_0", 1, #1, 0);
            Screen_WipeIn(2);
            Message_PauseSkinship();
            Voice_PlayVoice("B0306030_F00200", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "Do you usually go to the Aquarium?\nThere seems to be an Orca show too,\nI think.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Is that so?");
            }
        else {
            Character_Chara_GS2(6, "M6_??F", 0, 1, 1);
            Character_ChFace(1, 0, 10);
            Background_Bg_GS2("BG_WF300_?_0", 1, #1, 0);
            Screen_WipeIn(2);
            Message_PauseSkinship();
            Voice_PlayVoice("B0306030_F00300", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "Which is it?\nThe Aquarium or the Orca Show?");
            Message_Who(0);
            Message_MsgDisp("主人公", "Probably...");
            }
        Message_MsgSel("Go to the Aquarium", "See the Orca Show");
        switch (Message_TextSelect()){
            case 0:
            if (Parameter_GetCh1Param(6, 130) <= 2){
                Message_ResumeSkinship();
                Character_BlinkStart(6, 3, (#1), 2);
                Voice_PlayVoice("B0306030_F00400", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Alright. Then, shall we go?");
                }
            else {
                Character_ChFace(1, 0, 10);
                Message_ResumeSkinship();
                Character_BlinkStart(6, 2, (#1), 2);
                Voice_PlayVoice("B0306030_F00500", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Okay! Well then, let's go!");
                }
            Message_CloseMsg();
            Screen_WipeOut(2);
            Screen_ClearScreen();
            System_Call_GS2("B04", "M6", 31);
            break ;
            case 1:
            if (Parameter_GetCh1Param(6, 130) <= 2){
                Voice_PlayVoice("B0306030_F00600", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Is that so?\nIf it's not too much trouble, let's\ngo.");
                }
            else {
                Character_ChFace(1, 0, 10);
                Character_BlinkStart(6, 2, (#1), 2);
                Voice_PlayVoice("B0306030_F00700", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Yeah, that sounds good.");
                }
            Message_CloseMsg();
            Screen_WipeOut(2);
            Screen_ClearScreen();
            System_Call_GS2("B04", "M6", 32);
            break ;
            }
        }
    else if ((Date_ChkDateOpen(5) == 0) && (Date_ChkDateOpen(6) == 1)){
        if (Parameter_GetCh1Param(6, 130) <= 2){
            Character_Chara_GS2(6, "M6_??F", 0, 1, 1);
            Background_Bg_GS2("BG_WF300_?_0", 1, #1, 0);
            Screen_WipeIn(2);
            Message_PauseSkinship();
            Voice_PlayVoice("B0306030_F00800", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "Well then, where shall we go?");
            Message_Who(0);
            Message_MsgDisp("主人公", "Let's see...");
            }
        else {
            Character_Chara_GS2(6, "M6_??F", 0, 1, 1);
            Background_Bg_GS2("BG_WF300_?_0", 1, #1, 0);
            Screen_WipeIn(2);
            Message_PauseSkinship();
            Voice_PlayVoice("B0306030_F00900", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "Well, where do we go?");
            Message_Who(0);
            Message_MsgDisp("主人公", "Let's see...");
            }
        Message_MsgSel("Go to the Aquarium", "Go watch the whale shark in the huge tank");
        switch (Message_TextSelect()){
            case 0:
            if (Parameter_GetCh1Param(6, 130) <= 2){
                Character_BlinkStart(6, 2, (#1), 2);
                Voice_PlayVoice("B0306030_F01000", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Okay, I understand.");
                }
            else {
                Character_ChFace(1, 0, 10);
                Character_BlinkStart(6, 2, (#1), 2);
                Voice_PlayVoice("B0306030_F01100", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Well then, let's go.");
                }
            Message_CloseMsg();
            Screen_WipeOut(2);
            Screen_ClearScreen();
            System_Call_GS2("B04", "M6", 31);
            break ;
            case 1:
            if (Parameter_GetCh1Param(6, 130) <= 2){
                Character_BlinkStart(6, 2, (#1), 2);
                Voice_PlayVoice("B0306030_F01400", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Is that so?\nIf it's not too much trouble, let's\ngo.");
                }
            else {
                Character_ChFace(1, 2, 0);
                Character_BlinkStart(6, 3, (#1), 2);
                Character_ChFace(1, 3, 3);
                Voice_PlayVoice("B0306030_F01500", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Yeah, that sounds good.");
                }
            Message_CloseMsg();
            Screen_WipeOut(2);
            Screen_ClearScreen();
            System_Call_GS2("B04", "M6", 33);
            break ;
            }
        }
    else if ((Date_ChkDateOpen(5) == 1) && (Date_ChkDateOpen(6) == 1)){
        if (Parameter_GetCh1Param(6, 130) <= 2){
            Character_Chara_GS2(6, "M6_??F", 0, 1, 1);
            Background_Bg_GS2("BG_WF300_?_0", 1, #1, 0);
            Screen_WipeIn(2);
            Message_PauseSkinship();
            Voice_PlayVoice("B0306030_F00800", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "Well then, where should we go?");
            Message_Who(0);
            Message_MsgDisp("主人公", "Let's see...");
            }
        else {
            Character_Chara_GS2(6, "M6_??F", 0, 1, 1);
            Background_Bg_GS2("BG_WF300_?_0", 1, #1, 0);
            Screen_WipeIn(2);
            Message_PauseSkinship();
            Voice_PlayVoice("B0306030_F00900", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "Well, where do we go?");
            Message_Who(0);
            Message_MsgDisp("主人公", "Let's see...");
            }
        Message_MsgSel("Go to the Aquarium", "See the Orca Show", "Go watch the whale shark in the huge tank");
        switch (Message_TextSelect()){
            case 0:
            if (Parameter_GetCh1Param(6, 130) <= 2){
                Character_BlinkStart(6, 2, (#1), 2);
                Voice_PlayVoice("B0306030_F01000", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Yeah, I see.");
                }
            else {
                Character_ChFace(1, 0, 10);
                Character_BlinkStart(6, 2, (#1), 2);
                Voice_PlayVoice("B0306030_F01100", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Okay! Well then, let's go!");
                }
            Message_CloseMsg();
            Screen_WipeOut(2);
            Screen_ClearScreen();
            System_Call_GS2("B04", "M6", 31);
            break ;
            case 1:
            if (Parameter_GetCh1Param(6, 130) <= 2){
                Character_BlinkStart(6, 2, (#1), 2);
                Voice_PlayVoice("B0306030_F01200", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "The Orcas are pretty cute!\nWell then, let's go.");
                }
            else {
                Character_ChFace(1, 0, 10);
                Voice_PlayVoice("B0306030_F01300", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Okay!\nThe show doesn't seem like it'd be\nboring.");
                }
            Message_CloseMsg();
            Screen_WipeOut(2);
            Screen_ClearScreen();
            System_Call_GS2("B04", "M6", 32);
            break ;
            case 2:
            if (Parameter_GetCh1Param(6, 130) <= 2){
                Character_BlinkStart(6, 2, (#1), 2);
                Voice_PlayVoice("B0306030_F01400", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Is that so?\nWell if it isn't too much trouble,\nlet's go.");
                }
            else {
                Character_ChFace(1, 2, 0);
                Character_BlinkStart(6, 3, (#1), 2);
                Character_ChFace(1, 3, 3);
                Voice_PlayVoice("B0306030_F01500", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Yeah, that sounds good!");
                }
            Message_CloseMsg();
            Screen_WipeOut(2);
            Screen_ClearScreen();
            System_Call_GS2("B04", "M6", 33);
            break ;
            }
        }
    }
