section "b04_m3_233"{
    int var0 = Date_GetDateOption(2, 70);
    if (var0 == 0){
        Character_Chara_GS2(3, "M3_??F", 0, 1, 0);
        Character_ChFace(0, 2, 0);
        Character_BlinkStart(3, 2, (#1));
        Character_ChFace(0, 3, 3);
        Background_Bg_GS2("BG_TR530_?_0", 1, #1, 0);
        Screen_WipeIn(2);
        Music_PlayBGM(0, "MN_B_TR_500_000", 127, 40);
        Voice_PlayVoice("B0403233_C00000", #1, "");
        Message_Who(3);
        Message_MsgDisp("Hikami", "... It is finally over. It was long.");
        Message_MsgSel("I felt like a princess▼", "It was a little embarrassing.", "I wanted to ride the white horse.");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 3);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(3, "M3_??F", 0, 1, 1);
            Character_ChFace(1, 2, 5);
            Character_BlinkStart(3, 2, (#1), 2);
            Character_ChFace(1, 3, 3);
            Message_PauseSkinship();
            Voice_PlayVoice("B0403233_C00100", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "...\nTo be so accustomed to the\nmerry-go-round, you are a girl after\nall.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
            Message_SkinshipSet(0);
            break ;
            case 1:
            Date_InData_Date(124, 0);
            Date_InData_Date(321, 3);
            Character_ChFace(0, 2, 1);
            Character_BlinkStart(3, 3, (#1));
            Character_ChFace(0, 3, 2);
            Voice_PlayVoice("B0403233_C00200", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "Didn't you know that before we rode\nit?\nPlease also think about how the\nperson you made to accompany you\nfeels.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Argh～ Damn, I'm such an idiot!\nI made the worst impression～)");
            break ;
            case 2:
            Date_InData_Date(124, 1);
            Date_InData_Date(321, 2);
            Character_ChFace(0, 2, 1);
            Character_BlinkStart(3, 3, (#1), 1);
            Character_ChFace(0, 3, 2);
            Voice_PlayVoice("B0403233_C00300", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "Is that what you say after riding\naround on it...?\nEven that thing we rode just then\nwas adequately embarrassing.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
            break ;
            }
        }
    else if (var0 == 1){
        Character_Chara_GS2(3, "M3_??F", 0, 1, 0);
        Character_ChFace(0, 2, 0);
        Character_BlinkStart(3, 2, (#1));
        Character_ChFace(0, 3, 2);
        Background_Bg_GS2("BG_TR530_?_0", 1, #1, 0);
        Screen_WipeIn(2);
        Music_PlayBGM(0, "MN_B_TR_500_000", 127, 40);
        Voice_PlayVoice("B0403233_C00400", #1, "");
        Message_Who(3);
        Message_MsgDisp("Hikami", "...\nThey should make a merry-go-round\nwhere guys who accompany someone\nriding it do not think of it as\nembarrassing.");
        Message_MsgSel("Like a super robot?", "A pumpkin carriage with closable windows?", "Then it wouldn't be a merry-go-round.");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 2);
            Character_Chara_GS2(3, "M3_??F", 0, 1, 1);
            Character_ChFace(1, 2, 0);
            Character_ChFace(1, 3, 5);
            Message_PauseSkinship();
            Voice_PlayVoice("B0403233_C00500", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "Although it is a boyish choice, that\nstill might be inappropriate for my\nage.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
            Message_SkinshipSet(0);
            break ;
            case 1:
            Date_InData_Date(124, 3);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(3, "M3_??F", 0, 1, 1);
            Character_ChFace(1, 2, 5);
            Character_BlinkStart(3, 2, (#1), 2);
            Character_ChFace(1, 3, 3);
            Message_PauseSkinship();
            Voice_PlayVoice("B0403233_C00600", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "Completely shutting people out, huh.\nIf there was one, then I would not\nmind.\nBut it seems like I might get motion\nsickness.");
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
            Character_ChFace(0, 3, 1);
            Voice_PlayVoice("B0403233_C00700", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "... Perhaps.\nSo a merry-go-round without a\nfairy-tale feeling is just an empty\ndream, huh...");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
            break ;
            }
        }
    else if (var0 == 2){
        Character_Chara_GS2(3, "M3_??F", 0, 1, 0);
        Character_ChFace(0, 2, 0);
        Character_BlinkStart(3, 2, (#1));
        Character_ChFace(0, 3, 1);
        Background_Bg_GS2("BG_TR530_?_0", 1, #1, 0);
        Screen_WipeIn(2);
        Music_PlayBGM(0, "MN_B_TR_500_000", 127, 40);
        Voice_PlayVoice("B0403233_C00800", #1, "");
        Message_Who(3);
        Message_MsgDisp("Hikami", "...\nI feel like we are attracting\nattention from those around us.");
        Message_MsgSel("Isn't it your imagination?", "Perhaps we stand out...", "Maybe because we look lovey-dovey▼");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 3);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(3, "M3_??F", 0, 1, 1);
            Character_ChFace(1, 2, 5);
            Character_BlinkStart(3, 2, (#1), 2);
            Character_ChFace(1, 3, 3);
            Message_PauseSkinship();
            Voice_PlayVoice("B0403233_C00900", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "...\nAh, it is the parents of the\nchildren that we are riding this\nwith.\nHaha, I was overly self-conscious.");
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
            Character_ChFace(0, 3, 0);
            Voice_PlayVoice("B0403233_C01000", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "...\nBecause we are the only high\nschoolers riding this.\nI told you so.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
            break ;
            case 2:
            if (Parameter_GetCh1Param(3, 130) <= 3){
                Date_InData_Date(124, 0);
                Date_InData_Date(321, 3);
                Character_ChFace(0, 2, 1);
                Character_ChFace(0, 3, 2);
                Voice_PlayVoice("B0403233_C01100", #1, "");
                Message_Who(3);
                Message_MsgDisp("Hikami", "No matter how I appear, it does not\nchange how embarrassed I am.");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Argh～ Damn, I'm such an idiot!\nI made the worst impression～)");
                }
            else {
                Date_InData_Date(124, 5);
                Date_InData_Date(321, 1);
                Character_ChFace(0, 0, 11);
                Voice_PlayVoice("B0403233_C01200", #1, "");
                Message_Who(3);
                Message_MsgDisp("Hikami", "Eh!? Meaning that y-you and I...\nlook like a couple?");
                Message_Who(0);
                Message_MsgDisp("主人公", "Haha, maybe?");
                Character_ChFace(0, 2, 2);
                Character_ChFace(0, 3, 3);
                Character_ChFace(0, 0, 3);
                Voice_PlayVoice("B0403233_C01300", #1, "");
                Message_Who(3);
                Message_MsgDisp("Hikami", ".........\nI see, so it was that kind of look.\nThat makes me feel a little\nbetter...");
                Message_Who(0);
                Message_MsgDisp("主人公", "...\n｛Hikami＊＊｝, I'm sorry.\nI was kind of poking fun at you!");
                Character_ChFace(0, 2, 2);
                Character_ChFace(0, 3, 0);
                Voice_PlayVoice("B0403233_C01400", 3, "B0403233_C01401");
                Message_Who(3);
                Message_MsgDisp("Hikami", "... Eh?\n｛主人公｝, what was a\njoke and what was not a joke?");
                Voice_PlayVoice("B0403233_C01500", #1, "");
                Message_Who(3);
                Message_MsgDisp("Hikami", "Or was the whole thing perhaps a\nlie?\nAh, I don't know anymore...");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Ugh...\nIt looks like I made\n｛Hikami＊＊｝ worry...)");
                }
            break ;
            }
        }
    Message_CloseMsg();
    Screen_WipeOut(2);
    Screen_ClearScreen();
    }
