section "b03_m6_070"{
    if (Date_ChkDateOpen(19) == 1){
        if (Parameter_GetCh1Param(6, 130) <= 2){
            Character_Chara_GS2(6, "M6_??F", 0, 1, 1);
            Background_Bg_GS2("BG_FP000_SP_0", #1, #1, 0);
            Screen_WipeIn(2);
            Voice_PlayVoice("B0306070_F00000", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "The cherry blossoms are beautiful.\nIt was good of us to come.");
            }
        else {
            Character_Chara_GS2(6, "M6_??F", 0, 1, 1);
            Background_Bg_GS2("BG_FP000_SP_0", #1, #1, 0);
            Screen_WipeIn(2);
            Voice_PlayVoice("B0306070_F00100", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "I enjoy the cherry blossom viewing.\nIt's almost time to eat our box\nlunches!");
            }
        Message_CloseMsg();
        Screen_WipeOut(2);
        Screen_ClearScreen();
        System_Call_GS2("B04", "M6", 73);
        }
    else if (Date_ChkDateOpen(20) == 1){
        if (Parameter_GetCh1Param(6, 130) <= 2){
            Character_Chara_GS2(6, "M6_??F", 0, 1, 1);
            Background_Bg_GS2("BG_FP000_SP_0", #1, #1, 0);
            Screen_WipeIn(2);
            Voice_PlayVoice("B0306070_F00200", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "I'm also happy about the good\nweather.\nShall we go then?");
            }
        else {
            Character_Chara_GS2(6, "M6_??F", 0, 1, 1);
            Character_ChFace(1, 3, 3);
            Background_Bg_GS2("BG_FP000_SP_0", #1, #1, 0);
            Screen_WipeIn(2);
            Voice_PlayVoice("B0306070_F00300", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "This warmth is making my body feel\nwarm.\nI feel a bit sleepy...");
            }
        Message_CloseMsg();
        Screen_WipeOut(2);
        Screen_ClearScreen();
        System_Call_GS2("B04", "M6", 72);
        }
    else if (Date_ChkDateOpen(21) == 1){
        if (Parameter_GetCh1Param(6, 130) <= 2){
            Character_Chara_GS2(6, "M6_??F", 0, 1, 1);
            Background_Bg_GS2("BG_FP000_SU_0", #1, #1, 0);
            Screen_WipeIn(2);
            Message_PauseSkinship();
            Voice_PlayVoice("B0306070_F00400", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "Well, where do you want to go?");
            }
        else {
            Character_Chara_GS2(6, "M6_??F", 0, 1, 1);
            Character_ChFace(1, 0, 8);
            Character_BlinkStart(6, 2, (#1), 2);
            Background_Bg_GS2("BG_FP000_SU_0", #1, #1, 0);
            Screen_WipeIn(2);
            Message_PauseSkinship();
            Voice_PlayVoice("B0306070_F00500", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "Wow! Where do you want to go?");
            }
        Message_MsgSel("Let's go to the water fountain.", "I want to walk the avenue.");
        switch (Message_TextSelect()){
            case 0:
            if (Parameter_GetCh1Param(6, 130) <= 2){
                Character_ChFace(1, 2, 0);
                Character_BlinkStart(6, 3, (#1), 2);
                Character_ChFace(1, 3, 3);
                Message_ResumeSkinship();
                Voice_PlayVoice("B0306070_F00600", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Being near the water and able to\nenjoy the cool air is nice.");
                }
            else {
                Character_ChFace(1, 0, 10);
                Character_BlinkStart(6, 2, (#1));
                Message_ResumeSkinship();
                Voice_PlayVoice("B0306070_F00700", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Yeah, let's do that!\nBy the water is much better.");
                }
            Message_CloseMsg();
            Screen_WipeOut(2);
            Screen_ClearScreen();
            System_Call_GS2("B04", "M6", 71);
            break ;
            case 1:
            if (Parameter_GetCh1Param(6, 130) <= 2){
                Character_ChFace(1, 0, 10);
                Character_BlinkStart(6, 2, (#1), 2);
                Message_ResumeSkinship();
                Voice_PlayVoice("B0306070_F00800", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Let's enjoy the shade and walk as\nmuch as possible.");
                }
            else {
                Character_Chara_GS2(6, "M6_??F", 0, 1);
                Character_ChFace(1, 0, 11);
                Message_ResumeSkinship();
                Voice_PlayVoice("B0306070_F00900", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Ah!\nThe walk in the shade sounds good.");
                }
            Message_CloseMsg();
            Screen_WipeOut(2);
            Screen_ClearScreen();
            System_Call_GS2("B04", "M6", 74);
            break ;
            }
        }
    else if (Date_ChkDateOpen(22) == 1){
        if (Parameter_GetCh1Param(6, 130) <= 2){
            Character_Chara_GS2(6, "M6_??F", 0, 1, 1);
            Background_Bg_GS2("BG_FP000_AU_0", #1, #1, 0);
            Screen_WipeIn(2);
            Voice_PlayVoice("B0306070_F01000", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "It's easy to spend a day in the\ncool.\nA walk is perfect.");
            }
        else {
            Character_Chara_GS2(6, "M6_??F", 0, 1, 1);
            Background_Bg_GS2("BG_FP000_AU_0", #1, #1, 0);
            Screen_WipeIn(2);
            Voice_PlayVoice("B0306070_F01100", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "A stroll.\nWell, I will keep you company.");
            }
        Message_CloseMsg();
        Screen_WipeOut(2);
        Screen_ClearScreen();
        System_Call_GS2("B04", "M6", 75);
        }
    else if (Date_ChkDateOpen(23) == 1){
        if (Parameter_GetCh1Param(6, 130) <= 2){
            Character_Chara_GS2(6, "M6_??F", 0, 1, 1, 35);
            Background_Bg_GS2("BG_FP000_WI_0", #1, #1, 0);
            Screen_WipeIn(2);
            Voice_PlayVoice("B0306070_F01200", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "Shall we walk a bit?\nWe'll get warm if we move our\nbodies.");
            }
        else {
            Character_Chara_GS2(6, "M6_??F", 0, 1, 1, 35);
            Character_ChFace(1, 2, 2);
            Character_BlinkStart(6, 3, (#1), 2);
            Character_ChFace(1, 3, 5);
            Background_Bg_GS2("BG_FP000_WI_0", #1, #1, 0);
            Screen_WipeIn(2);
            Voice_PlayVoice("B0306070_F01300", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "Ehh, it's cold!\nA walk at a time like this...\nI'm just as curious, Senpai.");
            }
        Message_CloseMsg();
        Screen_WipeOut(2);
        Screen_ClearScreen();
        System_Call_GS2("B04", "M6", 76);
        }
    }
