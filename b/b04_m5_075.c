section "b04_m5_075"{
    int var0 = Date_GetDateOption(2, 22);
    Effect_OpenParticle(1);
    if (var0 == 0){
        Character_Chara_GS2(5, "M5_??F", 0, 1, 0);
        Character_ChFace(0, 0, 10);
        Character_BlinkStart(5, 2, (#1));
        Background_Bg_GS2("BG_FP220_AU_0", #1, #1, 0);
        Screen_WipeIn(2);
        Voice_PlayVoice("B0405075_E00000", #1, "");
        Message_Who(5);
        Message_MsgDisp("Chris", "It's so pretty.");
        Message_MsgSel("The falling leaves are romantic.", "As expected, Fall is about sports!", "My appetite grows in Fall, as expected.");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 2);
            Character_Chara_GS2(5, "M5_??F", 0, 1, 1);
            Character_ChFace(1, 2, 5);
            Character_BlinkStart(5, 2, (#1), 2);
            Character_ChFace(1, 3, 3);
            Message_PauseSkinship();
            Voice_PlayVoice("B0405075_E00100", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "Yeah.\nBut aren't the leaves that are still\non the branches also pretty?\nTake a look.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
            Message_SkinshipSet(0);
            break ;
            case 1:
            Date_InData_Date(124, 1);
            Date_InData_Date(321, 3);
            Character_ChFace(0, 2, 2);
            Character_ChFace(0, 3, 0);
            Voice_PlayVoice("B0405075_E00200", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "Hmm...\nWhen it gets colder, all the girls\nwear long pants instead...");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
            break ;
            case 2:
            Date_InData_Date(124, 3);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(5, "M5_??F", 0, 1, 1);
            Character_ChFace(1, 2, 0);
            Character_BlinkStart(5, 2, (#1), 2);
            Character_ChFace(1, 3, 3);
            Message_PauseSkinship();
            Voice_PlayVoice("B0405075_E00300", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "Yeah.\nI want to go hunting for eggplants\nor fishing for pike.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
            Message_SkinshipSet(0);
            break ;
            }
        }
    else if (var0 == 1){
        Character_Chara_GS2(5, "M5_??F", 0, 1, 0);
        Background_Bg_GS2("BG_FP220_AU_0", #1, #1, 0);
        Screen_WipeIn(2);
        Voice_PlayVoice("B0405075_E00400", #1, "");
        Message_Who(5);
        Message_MsgDisp("Chris", "Ah. Is that smoke?");
        Message_MsgSel("Maybe it's a hot spring...", "F-Fire!", "An open fire! Let's roast sweet potatoes!");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 4);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(5, "M5_??F", 0, 1, 1);
            Character_ChFace(1, 2, 3);
            Character_BlinkStart(5, 3, (#1), 2);
            Character_ChFace(1, 3, 0);
            Message_PauseSkinship();
            Voice_PlayVoice("B0405075_E00500", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "It would be amazing if it were an\nopen-air bath▼ It would be even\nbetter if it were a mixed bath▼");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yes!\nI made the perfect impression!!)");
            Message_SkinshipSet(0);
            break ;
            case 1:
            Date_InData_Date(124, 1);
            Date_InData_Date(321, 3);
            Character_ChFace(0, 2, 4);
            Character_ChFace(0, 3, 1);
            Voice_PlayVoice("B0405075_E00600", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "N-No, no!\nIt's just an open fire, so you don't\nhave to be so flustered～!");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
            break ;
            case 2:
            Date_InData_Date(124, 3);
            Date_InData_Date(321, 2);
            Character_Chara_GS2(5, "M5_??F", 0, 1, 1);
            Character_ChFace(1, 2, 3);
            Character_BlinkStart(5, 3, (#1), 2);
            Character_ChFace(1, 3, 0);
            Message_PauseSkinship();
            Voice_PlayVoice("B0405075_E00700", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "Yay! Where?\nI want roasted sweet potatoes,\nroasted sweet potatoes～!");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
            Message_SkinshipSet(0);
            break ;
            }
        }
    else if (var0 == 2){
        Character_Chara_GS2(5, "M5_??F", 0, 1, 0);
        Character_ChFace(0, 0, 10);
        Character_BlinkStart(5, 2, (#1));
        Background_Bg_GS2("BG_FP220_AU_0", #1, #1, 0);
        Screen_WipeIn(2);
        Voice_PlayVoice("B0405075_E00800", #1, "");
        Message_Who(5);
        Message_MsgDisp("Chris", "Ah, there's a painter.\nLet's have them show us their\npainting.");
        Message_MsgSel("Wow, what a daring color change!", "I prefer your paintings.", "What an amazing... painting...");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 3);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(5, "M5_??F", 0, 1, 1);
            Character_ChFace(1, 2, 0);
            Character_ChFace(1, 3, 3);
            Message_PauseSkinship();
            Voice_PlayVoice("B0405075_E00900", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "The reds and yellows are really\npretty.\nHow nice. It makes me want to paint.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
            Message_SkinshipSet(0);
            break ;
            case 1:
            if (Parameter_GetCh1Param(5, 130) <= 3){
                Date_InData_Date(124, 1);
                Date_InData_Date(321, 3);
                Character_ChFace(0, 0, 9);
                Voice_PlayVoice("B0405075_E01000", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "...\nEven if you really think that, you\nshouldn't say it.");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
                }
            else {
                Date_InData_Date(124, 5);
                Date_InData_Date(321, 1);
                Character_ChFace(0, 0, 9);
                Voice_PlayVoice("B0405075_E01100", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "...\nEven if you really think that, you\nshouldn't say it.");
                Message_Who(0);
                Message_MsgDisp("主人公", "S-Sorry. I unintentionally...");
                Character_ChFace(0, 0, 11);
                Voice_PlayVoice("B0405075_E01200", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "Eh.........");
                Character_ChFace(0, 2, 2);
                Character_ChFace(0, 3, 3);
                Voice_PlayVoice("B0405075_E01300", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "U-Umm...... Thanks.");
                Message_Who(0);
                Message_MsgDisp("主人公", "Eh?");
                Character_ChFace(0, 0, 11);
                Character_BlinkStart(5, 2, (#1));
                Character_ChFace(0, 4, 1);
                Voice_PlayVoice("B0405075_E01400", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "Y-You know.\nYou really shouldn't say such\nthings.");
                Voice_PlayVoice("B0405075_E01500", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "You shouldn't, but...");
                Character_ChFace(0, 0, 10);
                Character_ChFace(0, 4, 1);
                Voice_PlayVoice("B0405075_E01600", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "Unintentionally saying it...\nI'm happy that you are secretly\npraising me...");
                Character_BlinkStart(5, 3, (#1));
                Voice_PlayVoice("B0405075_E01700", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "So since you said it... Thanks...");
                Message_Who(0);
                Message_MsgDisp("主人公", "(I don't think I've ever seen\n｛Chris＊＊｝ so\nembarrassed...)");
                }
            break ;
            case 2:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 2);
            Character_Chara_GS2(5, "M5_??F", 0, 1, 1);
            Character_ChFace(1, 0, 11);
            Message_PauseSkinship();
            Voice_PlayVoice("B0405075_E01800", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "Yeah...\nThe sky is redder than the leaves.\nAmazing...");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
            Message_SkinshipSet(0);
            break ;
            }
        }
    Message_CloseMsg();
    Screen_WipeOut(2);
    Screen_ClearScreen();
    Effect_CloseParticle();
    }
