section "b04_m2_201"{
    int var0 = Date_GetDateOption(2, 15);
    if ((Date_Date_Nanpa() == 1) && (Parameter_GetCh1Param(2, 130) >= 4)){
        System_Call_GS2("B11", "M2", 0);
        Character_Chara_GS2(2, "M2_09F", 0, 1);
        Background_Bg_GS2("BG_WF530_SU_0", #1, #1, 0);
        Screen_WipeIn(2);
        Music_PlayBGM(0, "MN_B_WF_530_000", 127, 40);
        }
    else {
        Character_Chara_GS2(2, "M2_09F", 0);
        Background_Bg_GS2("BG_WF530_SU_0", #1, #1, 0);
        Screen_WipeIn(2);
        Music_PlayBGM(0, "MN_B_WF_530_000", 127, 40);
        System_Call_GS2("B02", "M2", 10);
        }
    if (var0 == 0){
        Character_ChFace(0, 2, 2);
        Character_BlinkStart(2, 3, (#1));
        Character_ChFace(0, 3, 0);
        Voice_PlayVoice("B0402201_B00000", #1, "");
        Message_Who(2);
        Message_MsgDisp("Shiba", "It's full of people...\nIt's hot, just looking at all the\npeople here...");
        Message_MsgSel("For the time being, let's swim!", "I want to go to the beach hut.", "Let's nap under the parasol.");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 4);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(2, "M2_09F", 0, 1, 1, 34);
            Character_ChFace(1, 0, 10);
            Message_PauseSkinship();
            Voice_PlayVoice("B0402201_B00100", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "Right.\nDo you wanna try long distance\nswimming?");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yes!\nI made the perfect impression!!)");
            Message_SkinshipSet(0);
            break ;
            case 1:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 2);
            Character_Chara_GS2(2, "M2_09F", 0, 1, 1, 34);
            Character_BlinkStart(2, 2, (#1), 2);
            Message_PauseSkinship();
            Voice_PlayVoice("B0402201_B00200", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "...\nThere's lots of people over there\ntoo...\nWell, let's try going later.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
            Message_SkinshipSet(0);
            break ;
            case 2:
            Date_InData_Date(124, 1);
            Date_InData_Date(321, 3);
            Character_ChFace(0, 3, 4);
            Voice_PlayVoice("B0402201_B00300", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "That...\nseems like it'd be unbearably hot...");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
            break ;
            }
        }
    else if (var0 == 1){
        Character_ChFace(0, 0, 3);
        Voice_PlayVoice("B0402201_B00400", #1, "");
        Message_Who(2);
        Message_MsgDisp("Shiba", "It looks like the waves are a little\ntall today.");
        Message_MsgSel("I want to try surfing.", "Should we make sand castles at the shore?", "The waves look scary, so let's not go in.");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 4);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(2, "M2_09F", 0, 1, 1, 34);
            Character_ChFace(1, 0, 10);
            Message_PauseSkinship();
            Voice_PlayVoice("B0402201_B00500", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "Are you interested? I wanna try too.\nIf we can borrow a board, let's give\nit a shot.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yes!\nI made the perfect impression!!)");
            Message_SkinshipSet(0);
            break ;
            case 1:
            Date_InData_Date(124, 1);
            Date_InData_Date(321, 3);
            Character_ChFace(0, 2, 2);
            Character_BlinkStart(2, 2, (#1), 1);
            Character_ChFace(0, 3, 0);
            Voice_PlayVoice("B0402201_B00600", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "...\nAre you listening to what I'm\nsaying?\nEven if we make one, it'd get washed\naway immediately.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
            break ;
            case 2:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 2);
            Character_Chara_GS2(2, "M2_09F", 0, 1, 1, 34);
            Character_ChFace(1, 2, 5);
            Character_ChFace(1, 3, 4);
            Message_PauseSkinship();
            Voice_PlayVoice("B0402201_B00700", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "It's not that bad...\nWell, I guess it's better safe than\nsorry.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
            Message_SkinshipSet(0);
            break ;
            }
        }
    else if (var0 == 2){
        Character_ChFace(0, 2, 1);
        Character_ChFace(0, 3, 2);
        Voice_PlayVoice("B0402201_B00800", #1, "");
        Message_Who(2);
        Message_MsgDisp("Shiba", "... My body is aching.\nAm I sunburnt?");
        Message_MsgSel("Don't worry about it, don't worry!", "I'll put some suntan oil on for you!", "I'll put on some sunblock for you!");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 3);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(2, "M2_09F", 0, 1, 1, 34);
            Character_ChFace(1, 2, 3);
            Character_BlinkStart(2, 2, (#1), 2);
            Character_ChFace(1, 3, 5);
            Message_PauseSkinship();
            Voice_PlayVoice("B0402201_B00900", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "Haha.\nYou're right, even if I was worried\nabout it, it can't be helped.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
            Message_SkinshipSet(0);
            break ;
            case 1:
            Date_InData_Date(124, 0);
            Date_InData_Date(321, 3);
            Character_BlinkStart(2, 3, (#1));
            Voice_PlayVoice("B0402201_B01000", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "... So I can get even more burnt?");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Argh～ Damn, I'm such an idiot!\nI made the worst impression～)");
            break ;
            case 2:
            if (Parameter_GetCh1Param(2, 130) <= 3){
                Date_InData_Date(124, 1);
                Date_InData_Date(321, 2);
                Character_ChFace(0, 2, 2);
                Character_BlinkStart(2, 2, (#1), 1);
                Character_ChFace(0, 3, 0);
                Voice_PlayVoice("B0402201_B01100", #1, "");
                Message_Who(2);
                Message_MsgDisp("Shiba", "... I'll decline.");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
                }
            else {
                Date_InData_Date(124, 5);
                Date_InData_Date(321, 1);
                Character_ChFace(0, 2, 2);
                Character_BlinkStart(2, 2, (#1));
                Character_ChFace(0, 3, 0);
                Character_ChFace(0, 4, 1);
                Voice_PlayVoice("B0402201_B01200", #1, "");
                Message_Who(2);
                Message_MsgDisp("Shiba", "It's fine. I'll decline.");
                Message_Who(0);
                Message_MsgDisp("主人公", "But...\nyour back is bright red, so if you\ndon't put any on now, it'll surely\nbecome a pain later, right?");
                Character_BlinkStart(2, 0, (#1));
                Voice_PlayVoice("B0402201_B01300", #1, "");
                Message_Who(2);
                Message_MsgDisp("Shiba", "... Right...");
                Character_BlinkStart(2, 3, (#1));
                Voice_PlayVoice("B0402201_B01400", #1, "");
                Message_Who(2);
                Message_MsgDisp("Shiba", "... No. Just drop it.");
                Message_Who(0);
                Message_MsgDisp("主人公", "... Should I?");
                Character_ChFace(0, 0, 11);
                Voice_PlayVoice("B0402201_B01500", #1, "");
                Message_Who(2);
                Message_MsgDisp("Shiba", "O...Oi, don't make that face.");
                Message_Who(0);
                Message_MsgDisp("主人公", "It's because...");
                Character_ChFace(0, 0, 3);
                Voice_PlayVoice("B0402201_B01600", #1, "");
                Message_Who(2);
                Message_MsgDisp("Shiba", "... Okay, I get it.\nBut if we reach my tolerance\nthreshold, please stop.\nSo...");
                Message_Who(0);
                Message_MsgDisp("主人公", "... You'll be tolerating it?");
                Voice_PlayVoice("B0402201_B01700", #1, "");
                Message_Who(2);
                Message_MsgDisp("Shiba", "Ah...");
                Character_ChFace(0, 2, 4);
                Character_ChFace(0, 3, 1);
                Voice_PlayVoice("B0402201_B01800", #1, "");
                Message_Who(2);
                Message_MsgDisp("Shiba", "No, I won't! I'm fine!");
                Character_ChFace(0, 0, 9);
                Character_ChFace(0, 4, 1);
                Character_BlinkStart(2, 3, (#1));
                Voice_PlayVoice("B0402201_B01900", #1, "");
                Message_Who(2);
                Message_MsgDisp("Shiba", "*Sigh*... Please, give me a break...");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Is ｛Shiba＊＊｝\nembarrassed?)");
                }
            break ;
            }
        }
    Message_CloseMsg();
    Music_StopBGM(0, 40);
    Screen_WipeOut(2);
    Screen_ClearScreen();
    }
