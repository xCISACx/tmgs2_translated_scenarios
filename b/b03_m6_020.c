section "b03_m6_020"{
    if ((Date_ChkDateOpen(2) == 0) && (Date_ChkDateOpen(3) == 0)){
        if (Parameter_GetCh1Param(6, 130) <= 2){
            Character_Chara_GS2(6, "M6_??F", 0, 1, 1, 35);
            Background_Bg_GS2("BG_WF200_?_0", 1, #1, 0);
            Screen_WipeIn(2);
            Voice_PlayVoice("B0306020_F00000", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "Shall we walk the Brick Pathway?");
            }
        else {
            Character_Chara_GS2(6, "M6_??F", 0, 1, 1, 35);
            Character_ChFace(1, 0, 10);
            Background_Bg_GS2("BG_WF200_?_0", 1, #1, 0);
            Screen_WipeIn(2);
            Voice_PlayVoice("B0306020_F00100", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "It's sometimes good to walk.\nWell, let's go then!");
            }
        Message_CloseMsg();
        Screen_WipeOut(2);
        Screen_ClearScreen();
        System_Call_GS2("B04", "M6", 21);
        }
    else if ((Date_ChkDateOpen(2) == 1) && (Date_ChkDateOpen(3) == 0)){
        Character_Chara_GS2(6, "M6_??F", 0, 1, 1, 35);
        Background_Bg_GS2("BG_WF200_?_0", 1, #1, 0);
        Screen_WipeIn(2);
        Message_MsgSel("Walk the Brick Pathway.", "Go to the BSB Observatory.");
        switch (Message_TextSelect()){
            case 0:
            if (Parameter_GetCh1Param(6, 130) <= 2){
                Character_ChFace(1, 2, 0);
                Character_ChFace(1, 3, 3);
                Voice_PlayVoice("B0306020_F00200", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Yes, I don't mind. Shall we go then?");
                }
            else {
                Character_ChFace(1, 2, 0);
                Character_ChFace(1, 3, 3);
                Voice_PlayVoice("B0306020_F00300", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Yeah, that's good. Well, let's go!");
                }
            Message_CloseMsg();
            Screen_WipeOut(2);
            Screen_ClearScreen();
            System_Call_GS2("B04", "M6", 21);
            break ;
            case 1:
            if (Parameter_GetCh1Param(6, 130) <= 2){
                Character_ChFace(1, 2, 5);
                Character_ChFace(1, 3, 3);
                Voice_PlayVoice("B0306020_F00400", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Oh, the Observatory... Let's go.");
                }
            else {
                Character_ChFace(1, 2, 0);
                Character_BlinkStart(6, 3, (#1), 2);
                Character_ChFace(1, 3, 3);
                Voice_PlayVoice("B0306020_F00500", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Oh, good, the Observatory!\nWell then, let's go!");
                }
            Message_CloseMsg();
            Screen_WipeOut(2);
            Screen_ClearScreen();
            System_Call_GS2("B04", "M6", 23);
            break ;
            }
        }
    else if ((Date_ChkDateOpen(2) == 0) && (Date_ChkDateOpen(3) == 1)){
        Character_Chara_GS2(6, "M6_??F", 0, 1, 1, 35);
        Background_Bg_GS2("BG_WF200_?_0", 1, #1, 0);
        Screen_WipeIn(2);
        Message_MsgSel("Walk the Brick Pathway.", "Mind boarding the sightseeing cruise?");
        switch (Message_TextSelect()){
            case 0:
            if (Parameter_GetCh1Param(6, 130) <= 2){
                Character_ChFace(1, 2, 0);
                Character_ChFace(1, 3, 3);
                Voice_PlayVoice("B0306020_F00600", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Yes, understood. Well, shall we go?");
                }
            else {
                Character_ChFace(1, 2, 3);
                Character_ChFace(1, 3, 0);
                Voice_PlayVoice("B0306020_F00700", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Walking, huh...\nWell, it's good every once in a\nwhile.");
                }
            Message_CloseMsg();
            Screen_WipeOut(2);
            Screen_ClearScreen();
            System_Call_GS2("B04", "M6", 21);
            break ;
            case 1:
            if (Parameter_GetCh1Param(6, 130) <= 2){
                Character_ChFace(1, 2, 0);
                Character_ChFace(1, 3, 3);
                Voice_PlayVoice("B0306020_F01000", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "A sight-seeing cruise...?\nAlright, sounds comfortable enough.");
                Message_CloseMsg();
                Screen_WipeOut(2);
                Character_Chara_GS2(6, "NON");
                Character_ChFace(1, 2, 0);
                Character_ChFace(1, 3, 3);
                Background_Bg_GS2("BG_WF240_?_0", 1, #1, 0);
                Screen_WipeIn(2);
                Message_PauseSkinship();
                Voice_PlayVoice("B0306020_F01100", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Well, let's get on.");
                }
            else {
                Character_ChFace(1, 2, 0);
                Character_ChFace(1, 3, 3);
                Voice_PlayVoice("B0306020_F01200", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Ah, a boat ride should be good!\nSounds fun!");
                Message_CloseMsg();
                Screen_WipeOut(2);
                Character_Chara_GS2(6, "NON");
                Character_ChFace(1, 2, 0);
                Character_ChFace(1, 3, 3);
                Background_Bg_GS2("BG_WF240_?_0", 1, #1, 0);
                Screen_WipeIn(2);
                Message_PauseSkinship();
                Voice_PlayVoice("B0306020_F01300", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Ah, come on. Let's get on!");
                }
            Message_CloseMsg();
            Screen_WipeOut(2);
            Screen_ClearScreen();
            if (Parameter_ChkSpEvent("B05", "M6", 0) == 0){
                System_Call_GS2("B04", "M6", 24);
                }
            else {
                System_Call_GS2("B05", "M6", 0);
                }
            break ;
            }
        }
    else if ((Date_ChkDateOpen(2) == 1) && (Date_ChkDateOpen(3) == 1)){
        Character_Chara_GS2(6, "M6_??F", 0, 1, 1, 35);
        Background_Bg_GS2("BG_WF200_?_0", 1, #1, 0);
        Screen_WipeIn(2);
        Message_MsgSel("Walk the Brick Pathway.", "Go to the BSB Observatory.", "Mind boarding the sightseeing cruise?");
        switch (Message_TextSelect()){
            case 0:
            if (Parameter_GetCh1Param(6, 130) <= 2){
                Character_ChFace(1, 2, 0);
                Character_ChFace(1, 3, 3);
                Voice_PlayVoice("B0306020_F00600", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Yes, understood. Well, shall we go?");
                }
            else {
                Character_ChFace(1, 2, 3);
                Character_ChFace(1, 3, 0);
                Voice_PlayVoice("B0306020_F00700", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Walking, huh...\nWell, it's good every once in a\nwhile.");
                }
            Message_CloseMsg();
            Screen_WipeOut(2);
            Screen_ClearScreen();
            System_Call_GS2("B04", "M6", 21);
            break ;
            case 1:
            if (Parameter_GetCh1Param(6, 130) <= 2){
                Character_ChFace(1, 2, 3);
                Character_ChFace(1, 3, 0);
                Voice_PlayVoice("B0306020_F00800", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Sounds good. Let's go.");
                }
            else {
                Character_ChFace(1, 2, 0);
                Character_ChFace(1, 3, 3);
                Voice_PlayVoice("B0306020_F00900", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Yeah, good! Let's go now!");
                }
            Message_CloseMsg();
            Screen_WipeOut(2);
            Screen_ClearScreen();
            System_Call_GS2("B04", "M6", 23);
            break ;
            case 2:
            if (Parameter_GetCh1Param(6, 130) <= 2){
                Character_ChFace(1, 2, 0);
                Character_ChFace(1, 3, 3);
                Voice_PlayVoice("B0306020_F01000", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "A sight-seeing cruise...?\nAlright, sounds comfortable enough.");
                Message_CloseMsg();
                Screen_WipeOut(2);
                Character_Chara_GS2(6, "NON");
                Character_ChFace(1, 2, 0);
                Character_ChFace(1, 3, 3);
                Background_Bg_GS2("BG_WF240_?_0", 1, #1, 0);
                Screen_WipeIn(2);
                Message_PauseSkinship();
                Voice_PlayVoice("B0306020_F01100", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Well, let's get on.");
                }
            else {
                Character_ChFace(1, 2, 0);
                Character_ChFace(1, 3, 3);
                Voice_PlayVoice("B0306020_F01200", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Ah, a boat ride should be good!\nSounds fun!");
                Message_CloseMsg();
                Screen_WipeOut(2);
                Character_Chara_GS2(6, "NON");
                Character_ChFace(1, 2, 0);
                Character_ChFace(1, 3, 3);
                Background_Bg_GS2("BG_WF240_?_0", 1, #1, 0);
                Screen_WipeIn(2);
                Message_PauseSkinship();
                Voice_PlayVoice("B0306020_F01300", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Ah, come on. Let's get on!");
                }
            Message_CloseMsg();
            Screen_WipeOut(2);
            Screen_ClearScreen();
            if (Parameter_ChkSpEvent("B05", "M6", 0) == 0){
                System_Call_GS2("B04", "M6", 24);
                }
            else {
                System_Call_GS2("B05", "M6", 0);
                }
            break ;
            }
        }
    }
