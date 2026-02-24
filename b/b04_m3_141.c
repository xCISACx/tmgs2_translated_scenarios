section "b04_m3_141"{
    int var0 = Date_GetDateOption(2, 36);
    Background_Bg_GS2("BG_NE220_CO_0", #1, #1, 0);
    SoundEffect_PlayStream(2, "SS_DSE_095_000");
    Screen_WipeIn(2);
    System_TouchWait();
    SoundEffect_StopStream(2, 40);
    Screen_WipeOut(2);
    Music_StopBGM(0, 40);
    if (var0 == 0){
        Character_Chara_GS2(3, "M3_??F", 0, 1, 0);
        Background_Bg_GS2("BG_NE210_?_0", 1, #1, 0);
        Screen_WipeIn(2);
        Message_MsgSel("That play was the best!", "That play was so-so.", "That play was disappointing.");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 1);
            Date_InData_Date(321, 3);
            Character_ChFace(0, 2, 1);
            Character_BlinkStart(3, 3, (#1), 1);
            Character_ChFace(0, 3, 2);
            Voice_PlayVoice("B0403141_C00000", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "... That?\nThe standard of what can make you\nlaugh is quite low.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
            break ;
            case 1:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 2);
            Character_Chara_GS2(3, "M3_??F", 0, 1, 1);
            Character_ChFace(1, 2, 0);
            Character_BlinkStart(3, 2, (#1), 2);
            Character_ChFace(1, 3, 1);
            Message_PauseSkinship();
            Voice_PlayVoice("B0403141_C00100", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "Stating our honest impressions is\nfor the benefit of them....\nThe audience should not cover for\nthem.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
            Message_SkinshipSet(0);
            break ;
            case 2:
            Date_InData_Date(124, 3);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(3, "M3_??F", 0, 1, 1);
            Character_ChFace(1, 2, 0);
            Character_BlinkStart(3, 3, (#1), 2);
            Character_ChFace(1, 3, 3);
            Message_PauseSkinship();
            Voice_PlayVoice("B0403141_C00200", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "Ah, I thought so too.\nThey are greatly mistaken if they\nthink the audience will laugh at the\nthings they did.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
            Message_SkinshipSet(0);
            break ;
            }
        }
    else if (var0 == 1){
        Character_Chara_GS2(3, "M3_??F", 0, 1, 0);
        Background_Bg_GS2("BG_NE210_?_0", 1, #1, 0);
        Screen_WipeIn(2);
        Voice_PlayVoice("B0403141_C00300", 3, "B0403141_C00301");
        Message_Who(3);
        Message_MsgDisp("Hikami", "... ｛主人公｝.\nI have stiff shoulders.");
        Message_MsgSel("It wasn't that funny, was it...", "My stomach is hurting!", "... Perhaps it's the way you sat?");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 3);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(3, "M3_??F", 0, 1, 1);
            Character_ChFace(1, 2, 0);
            Character_ChFace(1, 3, 1);
            Message_PauseSkinship();
            Voice_PlayVoice("B0403141_C00400", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "You thought so too.\nComedies are more difficult than\ntragedies.\nI think these people have a lot on\ntheir plate.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
            Message_SkinshipSet(0);
            break ;
            case 1:
            Date_InData_Date(124, 1);
            Date_InData_Date(321, 2);
            Character_ChFace(0, 2, 1);
            Character_BlinkStart(3, 3, (#1), 1);
            Character_ChFace(0, 3, 2);
            Voice_PlayVoice("B0403141_C00500", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "...\nYou were laughing the entire time.\nYour stomach muscles will hurt\ntomorrow.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
            break ;
            case 2:
            Date_InData_Date(124, 0);
            Date_InData_Date(321, 3);
            Character_ChFace(0, 2, 1);
            Character_BlinkStart(3, 2, (#1));
            Character_ChFace(0, 3, 2);
            Voice_PlayVoice("B0403141_C00600", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "It is not because of how I sat, it\nis because I was looking for\nsomething to laugh at, but couldn't\nfind anything.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Argh～ Damn, I'm such an idiot!\nI made the worst impression～)");
            break ;
            }
        }
    else if (var0 == 2){
        Character_Chara_GS2(3, "M3_??F", 0, 1, 0);
        Background_Bg_GS2("BG_NE210_?_0", 1, #1, 0);
        Screen_WipeIn(2);
        Voice_PlayVoice("B0403141_C00700", #1, "");
        Message_Who(3);
        Message_MsgDisp("Hikami", "...\nAs expected, by performing the show\nrepeatedly, they have gotten a\nlittle better.");
        Message_MsgSel("I laughed so much that I cried.", "They're showing us their professionalism.", "You're funnier, ｛Hikami＊＊｝.");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 1);
            Date_InData_Date(321, 2);
            Character_ChFace(0, 2, 2);
            Character_ChFace(0, 3, 1);
            Voice_PlayVoice("B0403141_C00800", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "...\nSo it is actually quite easy for\nyour tears to fall.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
            break ;
            case 1:
            Date_InData_Date(124, 3);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(3, "M3_??F", 0, 1, 1);
            Character_ChFace(1, 2, 0);
            Character_BlinkStart(3, 2, (#1), 2);
            Character_ChFace(1, 3, 3);
            Message_PauseSkinship();
            Voice_PlayVoice("B0403141_C00900", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "Yes...\nThis play will start getting funnier\nfrom now on.\nLet us expect great things from it.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
            Message_SkinshipSet(0);
            break ;
            case 2:
            if (Parameter_GetCh1Param(3, 130) <= 3){
                Date_InData_Date(124, 0);
                Date_InData_Date(321, 3);
                Character_ChFace(0, 2, 1);
                Character_ChFace(0, 3, 2);
                Voice_PlayVoice("B0403141_C01000", #1, "");
                Message_Who(3);
                Message_MsgDisp("Hikami", "... In other words, I am laughable.\nSo that is what you are saying.");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Argh～ Damn, I'm such an idiot!\nI made the worst impression～)");
                }
            else {
                Date_InData_Date(124, 5);
                Date_InData_Date(321, 1);
                Character_ChFace(0, 0, 11);
                Voice_PlayVoice("B0403141_C01100", #1, "");
                Message_Who(3);
                Message_MsgDisp("Hikami", "Eh...? What is funny about me?\nYou know, it is the first time\nsomeone has said that to me.");
                Message_Who(0);
                Message_MsgDisp("主人公", "Hmm.........\nSomehow, you in your entirety...");
                Character_ChFace(0, 2, 3);
                Character_ChFace(0, 3, 1);
                Voice_PlayVoice("B0403141_C01200", #1, "");
                Message_Who(3);
                Message_MsgDisp("Hikami", "Although I am used to being called a\nweird person...\nYou think I am funny?");
                Message_Who(0);
                Message_MsgDisp("主人公", "... That's how I see you.");
                Voice_PlayVoice("B0403141_C01300", #1, "");
                Message_Who(3);
                Message_MsgDisp("Hikami", "Do you mean that in a good way?");
                Message_Who(0);
                Message_MsgDisp("主人公", "Yeah, of course!");
                Character_ChFace(0, 4, 1);
                Voice_PlayVoice("B0403141_C01400", #1, "");
                Message_Who(3);
                Message_MsgDisp("Hikami", "Thank you...\nI found a reason to come here today.\nIt was to hear you say those words.");
                Message_Who(0);
                Message_MsgDisp("主人公", "(｛Hikami＊＊｝...?)");
                }
            break ;
            }
        }
    }
