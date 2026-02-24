section "b03_m6_220"{
    if (Parameter_GetCh1Param(6, 130) <= 2){
        Character_Chara_GS2(6, "M6_??F", 0, 1, 1);
        Character_ChFace(1, 0, 11);
        Character_BlinkStart(6, 2, (#1), 2);
        Character_ChFace(1, 3, 0);
        Background_Bg_GS2("BG_TR400_?_0", 1, #1, 0);
        Screen_WipeIn(2);
        Message_PauseSkinship();
        Voice_PlayVoice("B0306220_F00000", #1, "");
        Message_Who(6);
        Message_MsgDisp("Amachi", "This castle is large.\nIn the meantime, let's enter.");
        }
    else {
        Character_Chara_GS2(6, "M6_??F", 0, 1, 1);
        Character_ChFace(1, 0, 11);
        Background_Bg_GS2("BG_TR400_?_0", 1, #1, 0);
        Screen_WipeIn(2);
        Message_PauseSkinship();
        Voice_PlayVoice("B0306220_F00100", #1, "");
        Message_Who(6);
        Message_MsgDisp("Amachi", "Wow... that's large!\nWell let's enter!");
        }
    Message_CloseMsg();
    Screen_WipeOut(2);
    Character_Chara_GS2(6, "NON");
    Character_Chara_GS2(6, "M6_??F", 0, 1, 1);
    Background_Bg_GS2("BG_TR410_?_0", 1, #1, 0);
    Screen_WipeIn(2);
    Message_MsgSel("Let's climb the Castle Tower.", "We can watch the display.");
    switch (Message_TextSelect()){
        case 0:
        if (Parameter_GetCh1Param(6, 130) <= 2){
            Voice_PlayVoice("B0306220_F00200", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "Yes, let's do that.");
            }
        else {
            Character_ChFace(1, 2, 4);
            Character_BlinkStart(6, 2, (#1), 2);
            Character_ChFace(1, 3, 3);
            Voice_PlayVoice("B0306220_F00300", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "Oh, this seems interesting!\nLet's go!");
            }
        Message_CloseMsg();
        Screen_WipeOut(2);
        Screen_ClearScreen();
        System_Call_GS2("B04", "M6", 222);
        break ;
        case 1:
        if (Parameter_GetCh1Param(6, 130) <= 2){
            Voice_PlayVoice("B0306220_F00400", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "I don't mind, either.\nWell then, let's go.");
            }
        else {
            Character_ChFace(1, 2, 3);
            Character_BlinkStart(6, 0, (#1), 2);
            Character_BlinkStart(6, 2, (#1), 2);
            Character_ChFace(1, 3, 0);
            Voice_PlayVoice("B0306220_F00500", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "Mmm... Okay, that's good.\nThen let's go.");
            }
        Message_CloseMsg();
        Screen_WipeOut(2);
        Screen_ClearScreen();
        System_Call_GS2("B04", "M6", 221);
        break ;
        }
    }
