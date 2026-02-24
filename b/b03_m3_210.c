section "b03_m3_210"{
    Character_Chara_GS2(3, "M3_??F", 0, 1, 1);
    Background_Bg_GS2("BG_TR300_?_0", 1, #1, 0);
    Screen_WipeIn(2);
    if ((Date_ChkDateOpen(64) == 0) && (Date_ChkDateOpen(65) == 0)){
        Voice_PlayVoice("B0303210_C00000", #1, "");
        Message_Who(3);
        Message_MsgDisp("Hikami", "The zoo, huh.\nIt seems like there are a lot of\nthings that we can learn.");
        Message_CloseMsg();
        Screen_WipeOut(2);
        Screen_ClearScreen();
        System_Call_GS2("B04", "M3", 211);
        }
    else if ((Date_ChkDateOpen(64) == 1) && (Date_ChkDateOpen(65) == 0)){
        Message_PauseSkinship();
        Message_MsgSel("Ask to go to Puppy and Kitten Land.", "Don't ask.");
        switch (Message_TextSelect()){
            case 0:
            Voice_PlayVoice("B0303210_C00100", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "Right, it would not be a bad thing\nto get a feel of what owning a pet\nwould be like.");
            Message_CloseMsg();
            Screen_WipeOut(2);
            Screen_ClearScreen();
            System_Call_GS2("B04", "M3", 212);
            break ;
            case 1:
            Voice_PlayVoice("B0303210_C00200", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "The route is this way....\nNow, shall we proceed?");
            Message_CloseMsg();
            Screen_WipeOut(2);
            Screen_ClearScreen();
            System_Call_GS2("B04", "M3", 211);
            break ;
            }
        }
    else if ((Date_ChkDateOpen(64) == 0) && (Date_ChkDateOpen(65) == 1)){
        Message_PauseSkinship();
        Message_MsgSel("Let's go and see the white tiger.", "Don't ask.");
        switch (Message_TextSelect()){
            case 0:
            Voice_PlayVoice("B0303210_C00400", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "Ah, I am also interested in it.\nI definitely want to see it so I can\nlearn more about it.");
            Message_CloseMsg();
            Screen_WipeOut(2);
            Screen_ClearScreen();
            System_Call_GS2("B04", "M3", 213);
            break ;
            case 1:
            Voice_PlayVoice("B0303210_C00500", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "The route is this way....\nNow, shall we proceed?");
            Message_CloseMsg();
            Screen_WipeOut(2);
            Screen_ClearScreen();
            System_Call_GS2("B04", "M3", 211);
            break ;
            }
        }
    else if ((Date_ChkDateOpen(64) == 1) && (Date_ChkDateOpen(65) == 1)){
        Message_PauseSkinship();
        Message_MsgSel("Do you want to go to Puppy and Kitten Land?", "Let's go and see the white tiger.", "Don't ask.");
        switch (Message_TextSelect()){
            case 0:
            Voice_PlayVoice("B0303210_C00300", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "Alright.\nThe opportunity to come into contact\nwith animals is valuable.");
            Message_CloseMsg();
            Screen_WipeOut(2);
            Screen_ClearScreen();
            System_Call_GS2("B04", "M3", 212);
            break ;
            case 1:
            Voice_PlayVoice("B0303210_C00400", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "Ah, I am also interested in it.\nI definitely want to see it so I can\nlearn more about it.");
            Message_CloseMsg();
            Screen_WipeOut(2);
            Screen_ClearScreen();
            System_Call_GS2("B04", "M3", 213);
            break ;
            case 2:
            Voice_PlayVoice("B0303210_C00500", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "The route is this way....\nNow, shall we proceed?");
            Message_CloseMsg();
            Screen_WipeOut(2);
            Screen_ClearScreen();
            System_Call_GS2("B04", "M3", 211);
            break ;
            }
        }
    }
