section "b03_m4_150"{
    Character_Chara_GS2(4, "M4_??F", 0, 1, 1);
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
        Voice_PlayVoice("B0304150_D00000", #1, "");
        Message_Who(4);
        Message_MsgDisp("Hariya", "Okay, let's go!");
        Message_CloseMsg();
        Screen_WipeOut(2);
        Screen_ClearScreen();
        System_Call_GS2("B04", "M4", 151);
        }
    else if (Date_ChkDateOpen(44) == 1){
        Message_PauseSkinship();
        Voice_PlayVoice("B0304150_D00100", #1, "");
        Message_Who(4);
        Message_MsgDisp("Hariya", "What sounds good to you?");
        Message_MsgSel("Let's do bowling.", "The Darts Corner is good.");
        switch (Message_TextSelect()){
            case 0:
            Character_ChFace(1, 0, 10);
            Message_ResumeSkinship();
            Voice_PlayVoice("B0304150_D00200", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "Okay!\nI'm gonna knock down all the pins!");
            Message_CloseMsg();
            Screen_WipeOut(2);
            Screen_ClearScreen();
            System_Call_GS2("B04", "M4", 151);
            break ;
            case 1:
            Character_ChFace(1, 2, 4);
            Character_BlinkStart(4, 2, (#1), 2);
            Character_ChFace(1, 3, 3);
            Message_ResumeSkinship();
            Voice_PlayVoice("B0304150_D00300", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "Alright! Ah, I'm really good.\nOkay, here we go!");
            Message_CloseMsg();
            Screen_WipeOut(2);
            Screen_ClearScreen();
            if (Parameter_ChkSpEvent("B05", "M4", 0) == 0){
                System_Call_GS2("B04", "M4", 152);
                }
            else {
                System_Call_GS2("B05", "M4", 0);
                }
            break ;
            }
        }
    }
