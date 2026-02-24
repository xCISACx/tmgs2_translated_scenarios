section "b03_m6_231"{
    if (Date_ChkDateOpen(72) == 1){
        Character_Chara_GS2(6, "M6_??F", 0, 1, 1);
        Background_Bg_GS2("BG_TR501_?_1", 1, #1, 0);
        Screen_WipeIn(2);
        Message_PauseSkinship();
        if (Parameter_GetCh1Param(6, 130) <= 2){
            Voice_PlayVoice("B0306230_F05400", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "There seems to be a Night Parade\ntoday.\nWhat do you want to do?");
            }
        else if (Parameter_GetCh1Param(6, 130) >= 3){
            Voice_PlayVoice("B0306230_F05500", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "Hey hey, I hear the Night Parade's\ntoday!\nDo you want to go see it?");
            }
        Message_MsgSel("Yes, I want to see it.", "I'll pass today.");
        switch (Message_TextSelect()){
            case 0:
            if (Parameter_GetCh1Param(6, 130) <= 2){
                Character_ChFace(1, 0, 3);
                Character_BlinkStart(6, 3, (#1), 2);
                Message_PauseSkinship();
                Voice_PlayVoice("B0306230_F05600", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Yes, let's do it.\nThe parade is over there.");
                }
            else if (Parameter_GetCh1Param(6, 130) >= 3){
                Character_ChFace(1, 2, 0);
                Character_BlinkStart(6, 3, (#1), 2);
                Character_ChFace(1, 3, 3);
                Message_PauseSkinship();
                Voice_PlayVoice("B0306230_F05700", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Uh-huh, let's go do that!\nI hear it's very beautiful.\nI'm looking forward to it!");
                }
            Message_CloseMsg();
            Screen_WipeOut(2);
            Screen_ClearScreen();
            System_Call_GS2("B04", "M6", 236);
            Date_NightDate(0, 1);
            break ;
            case 1:
            if (Parameter_GetCh1Param(6, 130) <= 2){
                Character_ChFace(1, 0, 9);
                Message_PauseSkinship();
                Voice_PlayVoice("B0306230_F05800", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Is that so? Then let's go home.");
                }
            else if (Parameter_GetCh1Param(6, 130) >= 3){
                Character_ChFace(1, 0, 8);
                Character_BlinkStart(6, 2, (#1), 2);
                Character_ChFace(1, 3, 2);
                Message_PauseSkinship();
                Voice_PlayVoice("B0306230_F05900", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Ugh!? How boring...");
                }
            break ;
            }
        }
    Message_CloseMsg();
    Music_StopBGM(0, 40);
    Screen_WipeOut(2);
    Screen_ClearScreen();
    }
