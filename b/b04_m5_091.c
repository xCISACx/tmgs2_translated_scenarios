section "b04_m5_091"{
    int var0 = Date_GetDateOption(2, 25);
    Character_Chara_GS2(5, "M5_??F", 0, 1, 0);
    Background_Bg_GS2("BG_FP410_?_0", 1, #1, 0);
    Screen_WipeIn(2);
    Music_PlayBGM(0, "MN_B_FP_410_000", 127, 40);
    if (var0 == 0){
        Voice_PlayVoice("B0405091_E00000", #1, "");
        Message_Who(5);
        Message_MsgDisp("Chris", "There are a lot of strange things.\nI wonder what you use this for...");
        Message_MsgSel("Somehow, it feels really historic...", "The designs of the past are interesting!", "This clay figure looks like you.");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 2);
            Character_Chara_GS2(5, "M5_??F", 0, 1, 1);
            Message_PauseSkinship();
            Voice_PlayVoice("B0405091_E00100", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "That's... right.\nThis triangular thing is a swimsuit,\nright?\nA clay bikini▼");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
            Message_SkinshipSet(0);
            break ;
            case 1:
            Date_InData_Date(124, 4);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(5, "M5_??F", 0, 1, 1);
            Character_ChFace(1, 0, 10);
            Message_PauseSkinship();
            Voice_PlayVoice("B0405091_E00200", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "Right.\nWhen I see this, I think \"I can't\nlose, either\".");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yes!\nI made the perfect impression!!)");
            Message_SkinshipSet(0);
            break ;
            case 2:
            Date_InData_Date(124, 1);
            Date_InData_Date(321, 3);
            Character_ChFace(0, 0, 9);
            Voice_PlayVoice("B0405091_E00300", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "...\nDo I always have my mouth hanging\nopen like this?");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
            break ;
            }
        }
    else if (var0 == 1){
        Voice_PlayVoice("B0405091_E00400", #1, "");
        Message_Who(5);
        Message_MsgDisp("Chris", "That sparkling clean thing is\npretty.");
        Message_MsgSel("Maintenance of it seems tough.", "It looks like it would suit you.", "Isn't this some kind of inferior good?");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 2);
            Character_Chara_GS2(5, "M5_??F", 0, 1, 1);
            Message_PauseSkinship();
            Voice_PlayVoice("B0405091_E00500", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "Yeah.\nIt seems like if there was even one\nfingerprint on it, the cleaner will\nget yelled at.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
            Message_SkinshipSet(0);
            break ;
            case 1:
            Date_InData_Date(124, 3);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(5, "M5_??F", 0, 1, 1);
            Character_ChFace(1, 0, 10);
            Message_PauseSkinship();
            Voice_PlayVoice("B0405091_E00600", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "Really?\nEven though it's a hanging bell, I'm\nhappy you said that.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
            Message_SkinshipSet(0);
            break ;
            case 2:
            Date_InData_Date(124, 1);
            Date_InData_Date(321, 3);
            Character_ChFace(0, 2, 2);
            Character_BlinkStart(5, 3, (#1), 1);
            Character_ChFace(0, 3, 0);
            Voice_PlayVoice("B0405091_E00700", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "I don't think so.\nI think that the maker was really\nelaborate in their craftsmanship.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
            break ;
            }
        }
    else if (var0 == 2){
        Voice_PlayVoice("B0405091_E00800", #1, "");
        Message_Who(5);
        Message_MsgDisp("Chris", "It says that this is a jewel from\nthe past.");
        Message_MsgSel("... It's just an ordinary pebble.", "Faces are rising to the jewel's surface...", "Perhaps it will shine if you polish it.");
        switch (Message_TextSelect()){
            case 0:
            if (Parameter_GetCh1Param(5, 130) <= 3){
                Date_InData_Date(124, 1);
                Date_InData_Date(321, 3);
                Character_ChFace(0, 2, 2);
                Character_BlinkStart(5, 3, (#1), 1);
                Character_ChFace(0, 3, 1);
                Voice_PlayVoice("B0405091_E00900", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "If you polish it, it won't become a\njewel.\nIt's just a normal pebble.\nIs that something the museum can say\nto everyone?");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
                }
            else {
                Date_InData_Date(124, 5);
                Date_InData_Date(321, 1);
                Character_ChFace(0, 2, 5);
                Character_BlinkStart(5, 3, (#1));
                Character_ChFace(0, 3, 0);
                Voice_PlayVoice("B0405091_E01000", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "Right...\nIt can't be helped that it looks\nlike a pebble when it's not\npolished.");
                Message_Who(0);
                Message_MsgDisp("主人公", "Right.");
                Character_BlinkStart(5, 2, (#1));
                Voice_PlayVoice("B0405091_E01100", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "But there is a way to make that\npebble the best jewel in the world.");
                Message_Who(0);
                Message_MsgDisp("主人公", "Ehh. What kind of way?");
                Character_ChFace(0, 0, 10);
                Character_BlinkStart(5, 2, (#1));
                Character_ChFace(0, 4, 1);
                Voice_PlayVoice("B0405091_E01200", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "No matter what pebble it is, what\nyou've given me is an amazing jewel.");
                Character_BlinkStart(5, 3, (#1));
                Voice_PlayVoice("B0405091_E01300", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "Not just things...\nYour words, your smile...");
                Voice_PlayVoice("B0405091_E01400", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "To me, all of those things are my\ntreasures.");
                Character_ChFace(0, 0, 10);
                Character_ChFace(0, 4, 1);
                Voice_PlayVoice("B0405091_E01500", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "Remember that, okay?");
                Message_Who(0);
                Message_MsgDisp("主人公", "(... ｛Chris＊＊｝?)");
                }
            break ;
            case 1:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 2);
            Character_Chara_GS2(5, "M5_??F", 0, 1, 1);
            Message_PauseSkinship();
            Voice_PlayVoice("B0405091_E01600", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "Whoa, you're right.\nAh, it's smiling.\nMaybe it's happy that it could see\nyou?");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
            Message_SkinshipSet(0);
            break ;
            case 2:
            Date_InData_Date(124, 3);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(5, "M5_??F", 0, 1, 1);
            Character_ChFace(1, 0, 10);
            Message_PauseSkinship();
            Voice_PlayVoice("B0405091_E01700", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "Yeah, it's the same as people.\nThere aren't any people who don't\nshine after polishing themselves.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
            Message_SkinshipSet(0);
            break ;
            }
        }
    Message_CloseMsg();
    Music_StopBGM(0, 40);
    Screen_WipeOut(2);
    Screen_ClearScreen();
    }
