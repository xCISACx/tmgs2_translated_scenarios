section "b04_m1_201"{
    int var0 = Date_GetDateOption(2, 15);
    if ((Date_Date_Nanpa() == 1) && (Parameter_GetCh1Param(1, 130) >= 4)){
        System_Call_GS2("B11", "M1", 0);
        Character_Chara_GS2(1, "M1_09F", 0, 1);
        Background_Bg_GS2("BG_WF530_SU_0", #1, #1, 0);
        Screen_WipeIn(2);
        Music_PlayBGM(0, "MN_B_WF_530_000", 127, 40);
        }
    else {
        Character_Chara_GS2(1, "M1_09F", 0);
        Background_Bg_GS2("BG_WF530_SU_0", #1, #1, 0);
        Screen_WipeIn(2);
        Music_PlayBGM(0, "MN_B_WF_530_000", 127, 40);
        System_Call_GS2("B02", "M1", 10);
        }
    if (var0 == 0){
        Character_ChFace(0, 0, 10);
        Character_ChFace(0, 3, 2);
        Voice_PlayVoice("B0401201_A00000", #1, "");
        Message_Who(1);
        Message_MsgDisp("Saeki", "Now then... What should we do?");
        Message_MsgSel("For the time being, let's swim!", "I want to go to the beach hut.", "Let's nap under the parasol.");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 4);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(1, "M1_09F", 0, 1, 1, 34);
            Character_ChFace(1, 0, 10);
            Message_PauseSkinship();
            Voice_PlayVoice("B0401201_A00100", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "Right! Wait.\nI'll bring back a body board.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yes!\nI made the perfect impression!!)");
            Message_SkinshipSet(0);
            break ;
            case 1:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 3);
            Character_Chara_GS2(1, "M1_09F", 0, 1, 1, 34);
            Character_ChFace(1, 2, 3);
            Character_ChFace(1, 3, 1);
            Message_PauseSkinship();
            Voice_PlayVoice("B0401201_A00200", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "Hey, the beach hut is Sangosho's\nrival business, you know?\nAs a person related to Sangosho,\nhave some self-awareness.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
            Message_SkinshipSet(0);
            break ;
            case 2:
            Date_InData_Date(124, 3);
            Date_InData_Date(321, 2);
            Character_Chara_GS2(1, "M1_09F", 0, 1, 1, 34);
            Character_ChFace(1, 2, 3);
            Character_ChFace(1, 3, 0);
            Message_PauseSkinship();
            Voice_PlayVoice("B0401201_A00300", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "Right.\nLet's have a rest before the sand\ngets hot.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
            Message_SkinshipSet(0);
            break ;
            }
        }
    else if (var0 == 1){
        Character_ChFace(0, 2, 3);
        Character_ChFace(0, 3, 2);
        Voice_PlayVoice("B0401201_A00400", #1, "");
        Message_Who(1);
        Message_MsgDisp("Saeki", "When I'm in the ocean, I kind of...");
        Message_MsgSel("Feel sticky...", "Am well seasoned with salt!", "Think of yourself as insignificant.");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 1);
            Date_InData_Date(321, 3);
            Character_ChFace(0, 2, 0);
            Character_ChFace(0, 3, 1);
            Voice_PlayVoice("B0401201_A00500", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "Sticky...\nDo you hate the beach or something?");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
            break ;
            case 1:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 2);
            Character_Chara_GS2(1, "M1_09F", 0, 1, 1, 34);
            Character_ChFace(1, 2, 1);
            Character_ChFace(1, 3, 5);
            Message_PauseSkinship();
            Voice_PlayVoice("B0401201_A00600", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "Right, natural salt. Drink up, okay?");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
            Message_SkinshipSet(0);
            break ;
            case 2:
            Date_InData_Date(124, 4);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(1, "M1_09F", 0, 1, 1, 34);
            Character_ChFace(1, 2, 2);
            Character_ChFace(1, 3, 3);
            Message_PauseSkinship();
            Voice_PlayVoice("B0401201_A00700", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "Yeah. I always feel that way.\nBeing here lets me reset myself.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yes!\nI made the perfect impression!!)");
            Message_SkinshipSet(0);
            break ;
            }
        }
    else if (var0 == 2){
        Character_ChFace(0, 2, 4);
        Character_BlinkStart(1, 2, (#1));
        Character_ChFace(0, 3, 3);
        Voice_PlayVoice("B0401201_A00800", #1, "");
        Message_Who(1);
        Message_MsgDisp("Saeki", "The sun rays are particularly strong\ntoday...");
        Message_MsgSel("I'm more radiant, aren't I▼", "Summer has to be like this!", "UV rays, the UV rays!");
        switch (Message_TextSelect()){
            case 0:
            if (Parameter_GetCh1Param(1, 130) <= 3){
                Date_InData_Date(124, 1);
                Date_InData_Date(321, 3);
                Character_ChFace(0, 2, 4);
                Character_BlinkStart(1, 2, (#1), 1);
                Character_ChFace(0, 3, 0);
                Voice_PlayVoice("B0401201_A00900", #1, "");
                Message_Who(1);
                Message_MsgDisp("Saeki", "Definitely.\nYou put too much sunblock on.\nModerate yourself.");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
                }
            else {
                Date_InData_Date(124, 5);
                Date_InData_Date(321, 1);
                Character_ChFace(0, 0, 10);
                Voice_PlayVoice("B0401201_A01000", #1, "");
                Message_Who(1);
                Message_MsgDisp("Saeki", "Haha!\n\"Radiant\", who--");
                Message_Who(0);
                Message_MsgDisp("主人公", "?");
                Character_ChFace(0, 2, 3);
                Character_ChFace(0, 3, 2);
                Character_ChFace(0, 4, 1);
                Voice_PlayVoice("B0401201_A01100", #1, "");
                Message_Who(1);
                Message_MsgDisp("Saeki", ".........");
                Message_Who(0);
                Message_MsgDisp("主人公", "W-What?");
                Character_ChFace(0, 2, 5);
                Character_ChFace(0, 3, 3);
                Character_ChFace(0, 4, 1);
                Voice_PlayVoice("B0401201_A01200", #1, "");
                Message_Who(1);
                Message_MsgDisp("Saeki", "Nothing. I'm gonna go in for a swim.");
                Message_Who(0);
                Message_MsgDisp("主人公", "(What's wrong with\n｛Saeki＊＊｝...?)");
                }
            break ;
            case 1:
            Date_InData_Date(124, 4);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(1, "M1_09F", 0, 1, 1, 34);
            Character_ChFace(1, 0, 10);
            Message_PauseSkinship();
            Voice_PlayVoice("B0401201_A01300", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "Haha! You've said it.\nJust keep cancelling out the effects\nof your skin whitening phase!");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yes!\nI made the perfect impression!!)");
            Message_SkinshipSet(0);
            break ;
            case 2:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 2);
            Character_Chara_GS2(1, "M1_09F", 0, 1, 1, 34);
            Character_ChFace(1, 2, 0);
            Character_BlinkStart(1, 0, (#1), 2);
            Character_ChFace(1, 3, 3);
            Message_PauseSkinship();
            Voice_PlayVoice("B0401201_A01400", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "Hah... Well, take care.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
            Message_SkinshipSet(0);
            break ;
            }
        }
    Message_CloseMsg();
    Music_StopBGM(0, 40);
    Screen_WipeOut(2);
    Screen_ClearScreen();
    }
