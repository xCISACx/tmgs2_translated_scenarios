section "b04_m3_143"{
    int var0 = Date_GetDateOption(2, 38);
    Background_Bg_GS2("BG_NE240_CO_0", #1, #1, 0);
    SoundEffect_PlayStream(2, "MS_L_NE_240_S00");
    Screen_WipeIn(2);
    System_TouchWait();
    SoundEffect_StopStream(2, 40);
    Screen_WipeOut(2);
    Music_StopBGM(0, 40);
    if (var0 == 0){
        Character_Chara_GS2(3, "M3_??F", 0, 1, 0);
        Character_ChFace(0, 2, 1);
        Character_BlinkStart(3, 3, (#1));
        Character_ChFace(0, 3, 2);
        Background_Bg_GS2("BG_NE210_?_0", 1, #1, 0);
        Screen_WipeIn(2);
        Message_MsgSel("That live was the best!", "That live was so-so.", "That live was disappointing.");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 0);
            Date_InData_Date(321, 3);
            Character_ChFace(0, 0, 11);
            Voice_PlayVoice("B0403143_C00000", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "The best? ... That?");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Argh～ Damn, I'm such an idiot!\nI made the worst impression～)");
            break ;
            case 1:
            Date_InData_Date(124, 1);
            Date_InData_Date(321, 2);
            Character_ChFace(0, 2, 2);
            Character_BlinkStart(3, 3, (#1), 1);
            Character_ChFace(0, 3, 1);
            Voice_PlayVoice("B0403143_C00100", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", ".........\nI will just leave it at that, if you\nwere able to thoroughly enjoy\nyourself.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
            break ;
            case 2:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(3, "M3_??F", 0, 1, 1);
            Character_ChFace(1, 2, 2);
            Character_BlinkStart(3, 2, (#1), 2);
            Character_ChFace(1, 3, 3);
            Message_PauseSkinship();
            Voice_PlayVoice("B0403143_C00200", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "So I was not the only one who\nthought so.\nThe performance was truly awful.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
            Message_SkinshipSet(0);
            break ;
            }
        }
    else if (var0 == 1){
        Character_Chara_GS2(3, "M3_??F", 0, 1, 0);
        Character_ChFace(0, 2, 2);
        Character_BlinkStart(3, 3, (#1));
        Character_ChFace(0, 3, 1);
        Background_Bg_GS2("BG_NE210_?_0", 1, #1, 0);
        Screen_WipeIn(2);
        Voice_PlayVoice("B0403143_C00300", #1, "");
        Message_Who(3);
        Message_MsgDisp("Hikami", "Ah～, ah～...\nFor some reason, my hearing has gone\noff.");
        Message_MsgSel("... Because of the loud noise.", "Eh? What?", "Listen with your soul, not your ears!");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(3, "M3_??F", 0, 1, 1);
            Character_ChFace(1, 2, 2);
            Character_BlinkStart(3, 3, (#1), 2);
            Character_ChFace(1, 3, 0);
            Message_PauseSkinship();
            Voice_PlayVoice("B0403143_C00400", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "Ah...\nI have been had by the rock music\ngoblins.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
            Message_SkinshipSet(0);
            break ;
            case 1:
            Date_InData_Date(124, 1);
            Date_InData_Date(321, 2);
            Character_ChFace(0, 2, 2);
            Character_BlinkStart(3, 2, (#1), 1);
            Character_ChFace(0, 3, 0);
            Voice_PlayVoice("B0403143_C00500", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "...\nLet us both stop talking until our\nhearing is normal again.\nSpeaking in a loud voice would be a\nnuisance to everyone.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
            break ;
            case 2:
            Date_InData_Date(124, 0);
            Date_InData_Date(321, 3);
            Character_ChFace(0, 2, 0);
            Character_BlinkStart(3, 2, (#1));
            Character_ChFace(0, 3, 2);
            Voice_PlayVoice("B0403143_C00600", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "...\nMy soul is showing signs of\nrejecting this kind of music.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Argh～ Damn, I'm such an idiot!\nI made the worst impression～)");
            break ;
            }
        }
    else if (var0 == 2){
        Character_Chara_GS2(3, "M3_??F", 0, 1, 0);
        Character_ChFace(0, 2, 3);
        Character_BlinkStart(3, 2, (#1));
        Character_ChFace(0, 3, 0);
        Background_Bg_GS2("BG_NE210_?_0", 1, #1, 0);
        Screen_WipeIn(2);
        Voice_PlayVoice("B0403143_C00700", #1, "");
        Message_Who(3);
        Message_MsgDisp("Hikami", "If the artists' clothing is flashy,\nthen the audiences' clothes are also\nflashy...");
        Message_MsgSel("They're matching with the artist.", "It's said they are the forefront of trends.", "We actually stand out.");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(3, "M3_??F", 0, 1, 1);
            Character_ChFace(1, 2, 3);
            Character_ChFace(1, 3, 2);
            Message_PauseSkinship();
            Voice_PlayVoice("B0403143_C00800", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "...\nI see, that is the mentality of\nfans.\nEven with the clothes, I can feel\nthe sense of unity with the artist.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
            Message_SkinshipSet(0);
            break ;
            case 1:
            Date_InData_Date(124, 1);
            Date_InData_Date(321, 2);
            Character_ChFace(0, 2, 0);
            Character_BlinkStart(3, 3, (#1), 1);
            Character_ChFace(0, 3, 2);
            Voice_PlayVoice("B0403143_C00900", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "If that is called trendy, then I do\nnot mind not following trends.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
            break ;
            case 2:
            if (Parameter_GetCh1Param(3, 130) <= 3){
                Date_InData_Date(124, 0);
                Date_InData_Date(321, 3);
                Character_ChFace(0, 2, 2);
                Character_BlinkStart(3, 3, (#1));
                Character_ChFace(0, 3, 1);
                Voice_PlayVoice("B0403143_C01000", #1, "");
                Message_Who(3);
                Message_MsgDisp("Hikami", "If you knew that then you should\nhave told me earlier....\nEveryone's glances are hurtful.");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Argh～ Damn, I'm such an idiot!\nI made the worst impression～)");
                }
            else {
                Date_InData_Date(124, 5);
                Date_InData_Date(321, 1);
                Character_ChFace(0, 2, 2);
                Character_ChFace(0, 3, 3);
                Voice_PlayVoice("B0403143_C01100", #1, "");
                Message_Who(3);
                Message_MsgDisp("Hikami", "... That might be so.\nWe are out of place in these\nclothes.");
                Voice_PlayVoice("B0403143_C01200", #1, "");
                Message_Who(3);
                Message_MsgDisp("Hikami", "Even so, I cannot wear the same kind\nof clothes that they wear.\nAt any rate...");
                Message_Who(0);
                Message_MsgDisp("主人公", "?");
                Character_BlinkStart(3, 2, (#1));
                Character_ChFace(0, 4, 1);
                Voice_PlayVoice("B0403143_C01300", #1, "");
                Message_Who(3);
                Message_MsgDisp("Hikami", "...\nI wonder how we appear to other\npeople.");
                Character_BlinkStart(3, 3, (#1));
                Voice_PlayVoice("B0403143_C01400", #1, "");
                Message_Who(3);
                Message_MsgDisp("Hikami", "In other words...\nI wonder if we look like we are\nd-dating.");
                Message_Who(0);
                Message_MsgDisp("主人公", "... Yeah, maybe.");
                Character_ChFace(0, 2, 5);
                Character_BlinkStart(3, 2, (#1));
                Character_ChFace(0, 3, 3);
                Voice_PlayVoice("B0403143_C01500", #1, "");
                Message_Who(3);
                Message_MsgDisp("Hikami", "I see...\nIf that is so then I am a little -\nno - I am considerably glad.");
                Message_Who(0);
                Message_MsgDisp("主人公", "(｛Hikami＊＊｝...?)");
                }
            break ;
            }
        }
    }
