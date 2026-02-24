section "b04_m1_032"{
    int var0 = Date_GetDateOption(2, 5);
    if (var0 == 0){
        Character_Chara_GS2(1, "M1_??F", 0, 1, 0);
        Character_ChFace(0, 0, 11);
        Character_BlinkStart(1, 2, (#1));
        Background_Bg_GS2("BG_WF320_?_0", 1, #1, 0);
        Screen_WipeIn(2);
        Music_PlayBGM(0, "MN_B_WF_320_000", 127, 40);
        Voice_PlayVoice("B0401032_A00000", #1, "");
        Message_Who(1);
        Message_MsgDisp("Saeki", "When I look at orcas from up close,\nthey're somewhat huge.");
        Message_MsgSel("I want to try riding on its back.", "It had appeal.", "It's also called a \"killer whale\".");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 4);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(1, "M1_??F", 0, 1, 1);
            Character_ChFace(1, 2, 4);
            Character_BlinkStart(1, 2, (#1), 2);
            Character_ChFace(1, 3, 3);
            Message_PauseSkinship();
            Voice_PlayVoice("B0401032_A00100", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "Ah, I thought so too!\nBut their teeth look dangerous...");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yes!\nI made the perfect impression!!)");
            Message_SkinshipSet(0);
            break ;
            case 1:
            Date_InData_Date(124, 3);
            Date_InData_Date(321, 2);
            Character_Chara_GS2(1, "M1_??F", 0, 1, 1);
            Character_ChFace(1, 0, 10);
            Message_PauseSkinship();
            Voice_PlayVoice("B0401032_A00200", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "You're right.\nEven though it's close to humans and\ncute, their largeness is something\nelse.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
            Message_SkinshipSet(0);
            break ;
            case 2:
            Date_InData_Date(124, 1);
            Date_InData_Date(321, 3);
            Character_ChFace(0, 2, 4);
            Character_BlinkStart(1, 2, (#1), 1);
            Character_ChFace(0, 3, 1);
            Voice_PlayVoice("B0401032_A00300", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "Even elementary schoolers know that,\nright?\nAh, you... didn't know?");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
            break ;
            }
        }
    else if (var0 == 1){
        Character_Chara_GS2(1, "M1_??F", 0, 1, 0);
        Character_ChFace(0, 2, 0);
        Character_ChFace(0, 3, 5);
        Background_Bg_GS2("BG_WF320_?_0", 1, #1, 0);
        Screen_WipeIn(2);
        Music_PlayBGM(0, "MN_B_WF_320_000", 127, 40);
        Voice_PlayVoice("B0401032_A00400", #1, "");
        Message_Who(1);
        Message_MsgDisp("Saeki", "They can jump like that even with\ntheir build.\nRather than being like whales,\nthey're more like monsters...");
        Message_MsgSel("They seem like they'd be good at volleyball.", "They also seem really smart.", "They're a little scary...");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 3);
            Character_Chara_GS2(1, "M1_??F", 0, 1, 1);
            Character_ChFace(1, 0, 3);
            Message_PauseSkinship();
            Voice_PlayVoice("B0401032_A00500", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "Yeah, they do look powerful.\nEven if they weren't playing\nvolleyball, they still look\npowerful, though.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
            Message_SkinshipSet(0);
            break ;
            case 1:
            Date_InData_Date(124, 3);
            Date_InData_Date(321, 2);
            Character_Chara_GS2(1, "M1_??F", 0, 1, 1);
            Character_ChFace(1, 0, 11);
            Message_PauseSkinship();
            Voice_PlayVoice("B0401032_A00600", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "A smart monster...\nI kind of feel like they would be\nuncontrollable.\nOrcas are amazing.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
            Message_SkinshipSet(0);
            break ;
            case 2:
            Date_InData_Date(124, 4);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(1, "M1_??F", 0, 1, 1);
            Character_ChFace(1, 0, 10);
            Message_PauseSkinship();
            Voice_PlayVoice("B0401032_A00700", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "Aren't they? Right!\nYeah, as expected, they're\nmonsters...\nBut their pattern is surreal!");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yes!\nI made the perfect impression!!)");
            Message_SkinshipSet(0);
            break ;
            }
        }
    else if (var0 == 2){
        Character_Chara_GS2(1, "M1_??F", 0, 1, 0);
        Character_ChFace(0, 0, 11);
        Background_Bg_GS2("BG_WF320_?_0", 1, #1, 0);
        Screen_WipeIn(2);
        Music_PlayBGM(0, "MN_B_WF_320_000", 127, 40);
        Voice_PlayVoice("B0401032_A00800", #1, "");
        Message_Who(1);
        Message_MsgDisp("Saeki", "Whoa, I'm soaking wet.\nIt's expected of sitting in the very\nfront row.");
        Message_MsgSel("You look handsome when wet.", "That's why I didn't want to sit here...", "There's no substitute for this power!");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 3);
            Date_InData_Date(321, 2);
            Character_Chara_GS2(1, "M1_??F", 0, 1, 1);
            Character_ChFace(1, 0, 10);
            Character_BlinkStart(1, 2, (#1), 2);
            Message_PauseSkinship();
            Voice_PlayVoice("B0401032_A00900", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "Hah... you too! Ahaha!");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
            Message_SkinshipSet(0);
            break ;
            case 1:
            if (Parameter_GetCh1Param(1, 130) <= 3){
                Date_InData_Date(124, 1);
                Date_InData_Date(321, 3);
                Character_ChFace(0, 2, 0);
                Character_BlinkStart(1, 2, (#1), 1);
                Voice_PlayVoice("B0401032_A01000", #1, "");
                Message_Who(1);
                Message_MsgDisp("Saeki", "Don't complain.\nIt's kind of like a service from\nwhales, isn't it?\nIt must be.");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
                }
            else {
                Date_InData_Date(124, 5);
                Date_InData_Date(321, 1);
                Character_ChFace(0, 2, 2);
                Character_BlinkStart(1, 2, (#1));
                Character_ChFace(0, 3, 1);
                Voice_PlayVoice("B0401032_A01100", #1, "");
                Message_Who(1);
                Message_MsgDisp("Saeki", "Sorry!\nI thought that you'd be fine with\nbeing soaking wet, though...");
                Voice_PlayVoice("B0401032_A01200", #1, "");
                Message_Who(1);
                Message_MsgDisp("Saeki", "As expected, guys and girls are\ndifferent.");
                Message_Who(0);
                Message_MsgDisp("主人公", "Yeah...");
                Character_ChFace(0, 2, 2);
                Character_ChFace(0, 3, 3);
                Voice_PlayVoice("B0401032_A01300", #1, "");
                Message_Who(1);
                Message_MsgDisp("Saeki", "My bad. I'll make it up to you.\nLet's go borrow a towel.\nShould we go?");
                Message_Who(0);
                Message_MsgDisp("主人公", "Okay!");
                }
            break ;
            case 2:
            Date_InData_Date(124, 4);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(1, "M1_??F", 0, 1, 1);
            Character_ChFace(1, 0, 10);
            Message_PauseSkinship();
            Voice_PlayVoice("B0401032_A01400", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "Right!\nWith monsters, you gotta see their\nferocity from up close.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yes!\nI made the perfect impression!!)");
            Message_SkinshipSet(0);
            break ;
            }
        }
    Message_CloseMsg();
    Music_StopBGM(0, 40);
    Screen_WipeOut(2);
    Screen_ClearScreen();
    }
