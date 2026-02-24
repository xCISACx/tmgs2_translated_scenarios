section "b04_m5_144"{
    int var0 = Date_GetDateOption(2, 39);
    Background_Bg_GS2("BG_NE250_CO_0", #1, #1, 0);
    SoundEffect_PlayStream(2, "MS_L_10_P83_S00");
    Screen_WipeIn(2);
    System_TouchWait();
    SoundEffect_StopStream(2, 40);
    Screen_WipeOut(2);
    Music_StopBGM(0, 40);
    if (var0 == 0){
        Character_Chara_GS2(5, "M5_??F", 0, 1, 0);
        Background_Bg_GS2("BG_NE210_?_0", 1, #1, 0);
        Screen_WipeIn(2);
        Message_MsgSel("That live was the best!", "That live was so-so.", "That live was disappointing.");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 0);
            Date_InData_Date(321, 3);
            Character_ChFace(0, 0, 9);
            Character_BlinkStart(5, 3, (#1));
            Voice_PlayVoice("B0405144_E00000", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "Really? I couldn't stand it...");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Argh～ Damn, I'm such an idiot!\nI made the worst impression～)");
            break ;
            case 1:
            Date_InData_Date(124, 1);
            Date_InData_Date(321, 2);
            Character_ChFace(0, 2, 2);
            Character_BlinkStart(5, 2, (#1), 1);
            Character_ChFace(0, 3, 1);
            Voice_PlayVoice("B0405144_E00100", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "There were songs I could listen\nto...\nAh, as expected, I can't stand\nthis～.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
            break ;
            case 2:
            Date_InData_Date(124, 4);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(5, "M5_??F", 0, 1, 1);
            Character_ChFace(1, 2, 2);
            Character_BlinkStart(5, 3, (#1), 2);
            Character_ChFace(1, 3, 3);
            Message_PauseSkinship();
            Voice_PlayVoice("B0405144_E00200", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "... Thank gosh～.\nI thought I was the only one who\nthought so...");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yes!\nI made the perfect impression!!)");
            Message_SkinshipSet(0);
            break ;
            }
        }
    else if (var0 == 1){
        Character_Chara_GS2(5, "M5_??F", 0, 1, 0);
        Character_ChFace(0, 2, 0);
        Character_ChFace(0, 3, 4);
        Background_Bg_GS2("BG_NE210_?_0", 1, #1, 0);
        Screen_WipeIn(2);
        Voice_PlayVoice("B0405144_E00300", #1, "");
        Message_Who(5);
        Message_MsgDisp("Chris", "Is that singing? Or is it...");
        Character_ChFace(0, 7, 0);
        Message_MsgSel("It doesn't seem like singing.", "It's clearly singing.", "It was like playing around with words.");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 2);
            Character_Chara_GS2(5, "M5_??F", 0, 1, 1);
            Character_ChFace(1, 2, 2);
            Character_BlinkStart(5, 3, (#1), 2);
            Character_ChFace(1, 3, 0);
            Message_PauseSkinship();
            Voice_PlayVoice("B0405144_E00400", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "Yeah.\nIf I had to say, it was more like\nscreaming.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
            Message_SkinshipSet(0);
            break ;
            case 1:
            Date_InData_Date(124, 1);
            Date_InData_Date(321, 3);
            Character_ChFace(0, 0, 9);
            Voice_PlayVoice("B0405144_E00500", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "Really... I guess...\npeople have different ways of\nsinging...");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
            break ;
            case 2:
            Date_InData_Date(124, 3);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(5, "M5_??F", 0, 1, 1);
            Character_ChFace(1, 0, 10);
            Message_PauseSkinship();
            Voice_PlayVoice("B0405144_E00600", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "Right.\nIt turned into a word chain game\nhalf way.\nThat was interesting.");
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
        Background_Bg_GS2("BG_NE210_?_0", 1, #1, 0);
        Screen_WipeIn(2);
        Voice_PlayVoice("B0405144_E00700", #1, "");
        Message_Who(5);
        Message_MsgDisp("Chris", "The costumes of the girls near the\nend were heaps cute▼");
        Message_MsgSel("... So you like that kind of thing.", "The boys' costumes were also cute.", "It seems like it would suit you.");
        switch (Message_TextSelect()){
            case 0:
            if (Parameter_GetCh1Param(5, 130) <= 3){
                Date_InData_Date(124, 1);
                Date_InData_Date(321, 3);
                Character_ChFace(0, 0, 9);
                Voice_PlayVoice("B0405144_E00800", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "Should I have not talked about this?\nSorry...");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
                }
            else {
                Date_InData_Date(124, 5);
                Date_InData_Date(321, 1);
                Character_BlinkStart(5, 3, (#1));
                Voice_PlayVoice("B0405144_E00900", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "Yeah. I really like it.");
                Message_Who(0);
                Message_MsgDisp("主人公", "Hmm...");
                Character_BlinkStart(5, 2, (#1));
                Character_ChFace(0, 4, 1);
                Voice_PlayVoice("B0405144_E01000", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", ".........");
                Message_Who(0);
                Message_MsgDisp("主人公", "... What's wrong?");
                Character_ChFace(0, 2, 5);
                Character_ChFace(0, 3, 0);
                Voice_PlayVoice("B0405144_E01100", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "I was imagining you wearing that.\nCute.");
                Message_Who(0);
                Message_MsgDisp("主人公", "Ehh!");
                Character_BlinkStart(5, 3, (#1));
                Voice_PlayVoice("B0405144_E01200", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "You'd kinda look like a stuffed toy.\nAh, I want to make you wear it～.");
                Message_Who(0);
                Message_MsgDisp("主人公", "(S-Stuffed toy?\nI wonder what ｛Chris＊＊｝\nsaw...)");
                }
            break ;
            case 1:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 2);
            Character_Chara_GS2(5, "M5_??F", 0, 1, 1);
            Character_ChFace(1, 0, 3);
            Message_PauseSkinship();
            Voice_PlayVoice("B0405144_E01300", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "Ah～, they were matching.\nSo they even thought about matching\nthem, too.");
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
            Character_ChFace(1, 2, 0);
            Character_ChFace(1, 3, 3);
            Message_PauseSkinship();
            Voice_PlayVoice("B0405144_E01400", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "Really?\nLet's watch this again next time\nthen▼");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
            Message_SkinshipSet(0);
            break ;
            }
        }
    }
