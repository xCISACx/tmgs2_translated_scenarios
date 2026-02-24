section "p24_m7_000"{
    Background_Bg_GS2("BG_SC920_LI_0", #1, #1, 0);
    Screen_WipeIn(2);
    if (Parameter_bunka_jyu(0) == 1){
        Message_Who(0);
        Message_MsgDisp("主人公", "(Good, good.\nThe shop is getting great business!)");
        Voice_PlayVoice("", 7, "");
        Message_Who(7);
        Message_MsgDisp("Wakaouji", "｛主人公｝.");
        Message_Who(0);
        Message_MsgDisp("主人公", "｛Wakaouji＊＊｝!");
        Character_ChFace(0, 0, 0);
        Character_Chara_GS2(7, "M7_17F", 0);
        Voice_PlayVoice("P1407000_G00000", #1, "");
        Message_Who(7);
        Message_MsgDisp("Wakaouji", "Disco fever!");
        Message_Who(0);
        Message_MsgDisp("主人公", "It's because you brought in a lot of\ncustomers, ｛Wakaouji＊＊｝!");
        Character_ChFace(0, 2, 0);
        Character_ChFace(0, 3, 3);
        Voice_PlayVoice("P1407000_G00100", #1, "");
        Message_Who(7);
        Message_MsgDisp("Wakaouji", "Don't mention it.\nI owe it to the kind and cute show\ngirl.");
        Message_Who(0);
        Message_MsgDisp("主人公", "(I did it!\nI was praised by\n｛Wakaouji＊＊｝!)");
        }
    else {
        Message_Who(0);
        Message_MsgDisp("主人公", "(Yeah～...\nNo matter how much I try, customers\naren't coming right now...)");
        Voice_PlayVoice("", 7, "");
        Message_Who(7);
        Message_MsgDisp("Wakaouji", "｛主人公｝.");
        Message_Who(0);
        Message_MsgDisp("主人公", "｛Wakaouji＊＊｝.");
        Character_ChFace(0, 0, 0);
        Character_Chara_GS2(7, "M7_17F", 0);
        Voice_PlayVoice("P1407000_G00200", #1, "");
        Message_Who(7);
        Message_MsgDisp("Wakaouji", "Everyone's steadily leaving.");
        Message_Who(0);
        Message_MsgDisp("主人公", "I'm sorry.\nYou went through all of that trouble\nto bring a customer...");
        Character_ChFace(0, 2, 0);
        Character_ChFace(0, 3, 2);
        Voice_PlayVoice("P1407000_G00300", #1, "");
        Message_Who(7);
        Message_MsgDisp("Wakaouji", "It can't be helped...\nLet's block the exit so not everyone\ncan leave.");
        Message_Who(0);
        Message_MsgDisp("主人公", "What!?");
        Message_Who(0);
        Message_MsgDisp("主人公", "(I should've looked after the\ncustomers a little more nicely...)");
        }
    Message_CloseMsg();
    Music_StopBGM(0, 40);
    Screen_WipeOut(1);
    Screen_ClearScreen();
    Parameter_AddCh1Param(7, 86, 1);
    }
