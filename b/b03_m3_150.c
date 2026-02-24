section "b03_m3_150"{
    Character_Chara_GS2(3, "M3_??F", 0, 1, 1);
    if (Date_ChkDateOpen(47) == 1){
        Background_Bg_GS2("BG_NE303_CO_0", #1, #1, 0);
        }
    else if (Date_ChkDateOpen(46) == 1){
        Background_Bg_GS2("BG_NE302_CO_0", #1, #1, 0);
        }
    else if (Date_ChkDateOpen(44) == 1){
        Background_Bg_GS2("BG_NE301_CO_0", #1, #1, 0);
        }
    else {
        Background_Bg_GS2("BG_NE300_CO_0", #1, #1, 0);
        }
    Screen_WipeIn(2);
    if (Date_ChkDateOpen(44) == 0){
        Voice_PlayVoice("B0303150_C00000", #1, "");
        Message_Who(3);
        Message_MsgDisp("Hikami", "... Now then, let us go.");
        Message_CloseMsg();
        Screen_WipeOut(2);
        Screen_ClearScreen();
        System_Call_GS2("B04", "M3", 151);
        }
    else if (Date_ChkDateOpen(44) == 1){
        Message_PauseSkinship();
        Voice_PlayVoice("B0303150_C00100", #1, "");
        Message_Who(3);
        Message_MsgDisp("Hikami", "Bowling and darts...\nWhich one do you prefer?");
        Message_MsgSel("Let's go bowling.", "Let's go to the darts corner.");
        switch (Message_TextSelect()){
            case 0:
            Message_ResumeSkinship();
            Voice_PlayVoice("B0303150_C00200", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "Bowling, is it? ...\nAlright, let us do that.");
            Message_CloseMsg();
            Screen_WipeOut(2);
            Screen_ClearScreen();
            System_Call_GS2("B04", "M3", 151);
            break ;
            case 1:
            Message_ResumeSkinship();
            Voice_PlayVoice("B0303150_C00300", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "Darts, huh...\nOkay, I will give it a try.");
            Message_CloseMsg();
            Screen_WipeOut(2);
            Screen_ClearScreen();
            System_Call_GS2("B04", "M3", 152);
            break ;
            }
        }
    }
