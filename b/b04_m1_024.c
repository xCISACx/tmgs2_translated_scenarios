section "b04_m1_024"{
    int var0 = Date_GetDateOption(2, 3);
    if (var0 == 0){
        Character_Chara_GS2(1, "M1_??F", 0, 1, 0);
        Character_ChFace(0, 0, 10);
        Character_BlinkStart(1, 2, (#1));
        Background_Bg_GS2("BG_WF250_CO_0", #1, #1, 0);
        Screen_WipeIn(2);
        Voice_PlayVoice("B0401024_A00000", #1, "");
        Message_Who(1);
        Message_MsgDisp("Saeki", "This is nice.\nAs expected, I think that being on\nthe ocean is nice...");
        Message_MsgSel("My heart relaxes when I see the ocean.", "The sea breeze feels good.", "Didn't the sea shore stink?");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 4);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(1, "M1_??F", 0, 1, 1, 35);
            Character_ChFace(1, 0, 10);
            Message_PauseSkinship();
            Voice_PlayVoice("B0401024_A00100", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "Yeah.\nNo matter how long I look at it, I\ndon't get sick of it...");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yes!\nI made the perfect impression!!)");
            Message_SkinshipSet(0);
            break ;
            case 1:
            Date_InData_Date(124, 3);
            Date_InData_Date(321, 2);
            Character_Chara_GS2(1, "M1_??F", 0, 1, 1, 35);
            Character_ChFace(1, 2, 2);
            Character_ChFace(1, 3, 3);
            Message_PauseSkinship();
            Voice_PlayVoice("B0401024_A00200", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "Right.\nWhen the sea breeze blows, I feel\nlike I belong here.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
            Message_SkinshipSet(0);
            break ;
            case 2:
            Date_InData_Date(124, 1);
            Date_InData_Date(321, 3);
            Character_ChFace(0, 0, 8);
            Character_BlinkStart(1, 2, (#1), 1);
            Voice_PlayVoice("B0401024_A00300", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "......");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
            break ;
            }
        }
    else if (var0 == 1){
        Character_Chara_GS2(1, "M1_??F", 0, 1, 0);
        Character_ChFace(0, 2, 4);
        Character_BlinkStart(1, 2, (#1));
        Character_ChFace(0, 3, 3);
        Background_Bg_GS2("BG_WF250_CO_0", #1, #1, 0);
        Screen_WipeIn(2);
        Voice_PlayVoice("B0401024_A00400", #1, "");
        Message_Who(1);
        Message_MsgDisp("Saeki", "We've gotten the special seats!\nAs expected, this feels nice.");
        Message_MsgSel("You're in high spirits, like a kid.", "I feel like a bird, with wind like this!", "Seawater splashed into my eye...");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 1);
            Date_InData_Date(321, 3);
            Character_ChFace(0, 0, 8);
            Character_BlinkStart(1, 2, (#1), 1);
            Voice_PlayVoice("B0401024_A00500", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "... I'm sorry for being like a kid.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
            break ;
            case 1:
            Date_InData_Date(124, 4);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(1, "M1_??F", 0, 1, 1, 35);
            Character_ChFace(1, 0, 10);
            Message_PauseSkinship();
            Voice_PlayVoice("B0401024_A00600", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "Right!\nCutting through the wind like this\nfeels good.\nIt makes me excited!");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yes!\nI made the perfect impression!!)");
            Message_SkinshipSet(0);
            break ;
            case 2:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 2);
            Character_Chara_GS2(1, "M1_??F", 0, 1, 1, 35);
            Character_ChFace(1, 0, 3);
            Message_PauseSkinship();
            Voice_PlayVoice("B0401024_A00700", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "Ah, don't rub your eye!\nJust try shutting your eyes tightly.\nYou'll cry it out.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
            Message_SkinshipSet(0);
            break ;
            }
        }
    else if (var0 == 2){
        Character_Chara_GS2(1, "M1_??F", 0, 1, 0);
        Character_ChFace(0, 0, 11);
        Character_BlinkStart(1, 2, (#1));
        Background_Bg_GS2("BG_WF250_CO_0", #1, #1, 0);
        Screen_WipeIn(2);
        Voice_PlayVoice("B0401024_A00800", #1, "");
        Message_Who(1);
        Message_MsgDisp("Saeki", "The wind has gotten cooler.\nAre you cold?");
        Message_MsgSel("No, I'm fine!", "I borrowed a blanket.", "I'm cold! Warm me up▼");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 2);
            Character_Chara_GS2(1, "M1_??F", 0, 1, 1, 35);
            Character_ChFace(1, 0, 3);
            Character_BlinkStart(1, 2, (#1), 2);
            Message_PauseSkinship();
            Voice_PlayVoice("B0401024_A00900", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "I see. You're quite strong.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
            Message_SkinshipSet(0);
            break ;
            case 1:
            Date_InData_Date(124, 3);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(1, "M1_??F", 0, 1, 1, 35);
            Character_ChFace(1, 0, 11);
            Message_PauseSkinship();
            Voice_PlayVoice("B0401024_A01000", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "Ehh, you borrowed one for us.\nHow thoughtful.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
            Message_SkinshipSet(0);
            break ;
            case 2:
            if (Parameter_GetCh1Param(1, 130) <= 3){
                Date_InData_Date(124, 1);
                Date_InData_Date(321, 3);
                Character_ChFace(0, 0, 8);
                Voice_PlayVoice("B0401024_A01100", #1, "");
                Message_Who(1);
                Message_MsgDisp("Saeki", "Don't get carried away.");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
                }
            else {
                Date_InData_Date(124, 5);
                Date_InData_Date(321, 1);
                Character_ChFace(0, 0, 3);
                Character_ChFace(0, 2, 1);
                Character_ChFace(0, 4, 1);
                Voice_PlayVoice("B0401024_A01200", #1, "");
                Message_Who(1);
                Message_MsgDisp("Saeki", "You say such things sometimes, don't\nyou?");
                Message_Who(0);
                Message_MsgDisp("主人公", "\"Such things\"?");
                Character_BlinkStart(1, 3, (#1));
                Voice_PlayVoice("B0401024_A01300", #1, "");
                Message_Who(1);
                Message_MsgDisp("Saeki", "Even though you don't know how other\npeople feel...");
                Message_Who(0);
                Message_MsgDisp("主人公", "｛Saeki＊＊｝?");
                Character_ChFace(0, 0, 8);
                Character_ChFace(0, 4, 1);
                Voice_PlayVoice("B0401024_A01400", #1, "");
                Message_Who(1);
                Message_MsgDisp("Saeki", "Shut up. Go somewhere else.");
                Message_Who(0);
                Message_MsgDisp("主人公", "(He's angry...)");
                }
            break ;
            }
        }
    Message_CloseMsg();
    Screen_WipeOut(2);
    Screen_ClearScreen();
    }
